@class NSNumber, NSString;

@interface AWETimeRange : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *start;
@property (retain, nonatomic) NSNumber *duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)timeRangeWithCMTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
+ (id)JSONKeyPathsByPropertyKey;

@end
