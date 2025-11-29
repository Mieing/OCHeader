@class NSNumber, NSString;

@interface AWEMVLocalGroup : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *vid;
@property (retain, nonatomic) NSNumber *value;
@property (nonatomic) long long minRegion;
@property (nonatomic) long long maxRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
