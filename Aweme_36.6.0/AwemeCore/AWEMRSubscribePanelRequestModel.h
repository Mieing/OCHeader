@class NSString, NSNumber, NSDictionary;

@interface AWEMRSubscribePanelRequestModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *popId;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSNumber *themeMode;
@property (copy, nonatomic) NSString *mobParams;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
