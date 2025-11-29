@class NSNumber, NSString, NSDictionary;

@interface AWEEcomAISearchRequestParamsModel : MTLModel <MTLJSONSerializing, AWEEcomAISearchExtraRequestCodable>

@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *count;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *searchChannel;
@property (copy, nonatomic) NSString *searchScene;
@property (copy, nonatomic) NSString *searchUniqueId;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterFromSecond;
@property (copy, nonatomic) NSString *searchSource;
@property (retain, nonatomic) NSNumber *deviceScore;
@property (copy, nonatomic) NSString *ecomTheme;
@property (copy, nonatomic) NSString *bcmChain;
@property (copy, nonatomic) NSString *lynxSsrProps;
@property (copy, nonatomic) NSString *ecomSceneId;
@property (retain, nonatomic) NSNumber *addressBookAccesss;
@property (retain, nonatomic) NSNumber *locationAccess;
@property (copy, nonatomic) NSString *searchSesssionId;
@property (copy, nonatomic) NSString *questionProductId;
@property (copy, nonatomic) NSString *questionBaseSearchId;
@property (copy, nonatomic) NSDictionary *extraRequestParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
