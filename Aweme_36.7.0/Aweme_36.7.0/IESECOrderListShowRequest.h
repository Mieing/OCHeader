@class NSString, UIViewController, NSDictionary;

@interface IESECOrderListShowRequest : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *log_pv;
@property (copy, nonatomic) NSString *hide_guess_you_like;
@property (weak, nonatomic) UIViewController *sourceViewController;
@property (copy, nonatomic) id /* block */ openCompletion;
@property (copy, nonatomic) NSDictionary *rawParams;
@property (nonatomic) unsigned long long queryType;
@property (readonly, copy, nonatomic) NSString *previousPage;
@property (readonly, copy, nonatomic) NSString *decodedKeyword;
@property (readonly, copy, nonatomic) NSDictionary *logPV;
@property (nonatomic) BOOL hideRecommend;
@property (nonatomic) BOOL decodeErrorInfo;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *historyPath;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *tab_id;
@property (copy, nonatomic) NSString *isNewEntryFromMall;
@property (copy, nonatomic) NSString *fromSource;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *searchSource;
@property (copy, nonatomic) NSString *bizIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showRequestWithType:(unsigned long long)a0 params:(id)a1 source:(id)a2;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
