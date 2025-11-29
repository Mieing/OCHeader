@class AWEDouPlusPayDeskModel, NSDictionary;

@interface AWEDouPlusPayDeskViewModel : NSObject

@property (retain, nonatomic) AWEDouPlusPayDeskModel *dataModel;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (copy, nonatomic) NSDictionary *logParams;
@property (nonatomic) long long sceneType;

- (id)initWithParamDict:(id)a0;
- (void)trackerClickcDouPlusConfirmPayment;
- (void)monitorWithPaySuccess:(BOOL)a0 errorStatus:(long long)a1 errorMessage:(id)a2;
- (void)trackerDouPlusPayStatus:(BOOL)a0;
- (void)setupDataModelWithParamDict:(id)a0;
- (id)paramsDictFromJsonString:(id)a0;
- (id)moneyStringInBizParams;
- (id)commomReportParams;
- (void).cxx_destruct;

@end
