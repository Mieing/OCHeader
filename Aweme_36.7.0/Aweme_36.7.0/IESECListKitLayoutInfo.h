@class NSNumber, NSString;

@interface IESECListKitLayoutInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *top;
@property (retain, nonatomic) NSNumber *right;
@property (retain, nonatomic) NSNumber *bottom;
@property (retain, nonatomic) NSNumber *left;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *radius;
@property (copy, nonatomic) NSString *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
