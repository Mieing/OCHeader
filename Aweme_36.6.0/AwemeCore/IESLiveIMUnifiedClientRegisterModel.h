@class NSString;

@interface IESLiveIMUnifiedClientRegisterModel : NSObject

@property (nonatomic) long long uniqueId;
@property (nonatomic) long long bizToken;
@property (nonatomic) BOOL isRegister;
@property (nonatomic) double timeout;
@property (nonatomic) double createTime;
@property (retain, nonatomic) NSString *statusMessage;

- (BOOL)isTimeoutRegisterModel;
- (void).cxx_destruct;
- (id)init;

@end
