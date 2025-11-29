@class NSString, NSDictionary;

@interface AWECampaignShortcutInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *willGetInfo;
@property (retain, nonatomic) NSString *withdrawInfo;
@property (nonatomic) long long reqInterval;
@property (retain, nonatomic) NSString *webURL;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
