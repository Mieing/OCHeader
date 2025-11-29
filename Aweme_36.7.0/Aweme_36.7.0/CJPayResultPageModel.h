@class NSString, NSDictionary, CJPayResultPageInfoModel;

@interface CJPayResultPageModel : JSONModel

@property (nonatomic) long long remainTime;
@property (retain, nonatomic) CJPayResultPageInfoModel *resultPageInfo;
@property (copy, nonatomic) NSString *openSchema;
@property (copy, nonatomic) NSString *openUrl;
@property (copy, nonatomic) NSDictionary *orderResponse;
@property (copy, nonatomic) NSString *orderType;
@property (nonatomic) long long amount;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
