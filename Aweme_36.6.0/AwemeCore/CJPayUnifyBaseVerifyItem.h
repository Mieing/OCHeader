@class NSDictionary, NSString, CJPayUnifyVerifyController;

@interface CJPayUnifyBaseVerifyItem : NSObject

@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *merchantID;
@property (copy, nonatomic) NSString *memberBizOrderNo;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) unsigned long long type;
@property (weak, nonatomic) CJPayUnifyVerifyController *controller;
@property (copy, nonatomic) NSDictionary *verifyTokenDic;
@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSDictionary *context;

- (void)trackEvent:(id)a0 params:(id)a1;
- (id)getTrackExtraParams;
- (BOOL)isEngimaTypeCcit;
- (void)startVerifyWithParams:(id)a0 completionBlock:(id /* block */)a1;
- (id)buildResultModelWithResultType:(unsigned long long)a0;
- (id)verifyEngimaImpl;
- (void).cxx_destruct;

@end
