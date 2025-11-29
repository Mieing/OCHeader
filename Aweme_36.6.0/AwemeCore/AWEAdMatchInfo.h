@class NSNumber, NSString;

@interface AWEAdMatchInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *advID;
@property (copy, nonatomic) NSNumber *devideID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
