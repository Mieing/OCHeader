@class NSString;

@interface HunterPreActiveControlModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enableHunterPreActiveCommon;
@property (nonatomic) long long checkUseGeckoDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
