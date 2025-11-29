@class NSArray, NSString, NSDictionary;

@interface AWECampaignImageModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *urlList;
@property (copy, nonatomic) NSString *uri;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isEmpty;

@end
