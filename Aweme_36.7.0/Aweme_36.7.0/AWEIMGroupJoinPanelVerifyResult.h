@class AWEIMShareVerifyResponseModel, NSError, NSString;

@interface AWEIMGroupJoinPanelVerifyResult : NSObject

@property (retain, nonatomic) AWEIMShareVerifyResponseModel *verifyResp;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;

- (id)initWithResp:(id)a0 error:(id)a1 statusCode:(long long)a2 statusMsg:(id)a3;
- (void).cxx_destruct;

@end
