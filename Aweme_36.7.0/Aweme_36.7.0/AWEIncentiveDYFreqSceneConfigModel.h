@class NSString;

@interface AWEIncentiveDYFreqSceneConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long day;
@property (nonatomic) long long count;
@property (nonatomic) long long exitCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
