@class QQApiMiniProgramObject, QQApiObject, ArkObject;

@interface SendMessageToQQReq : QQBaseReq

@property (retain, nonatomic) QQApiObject *apiObject;
@property (retain, nonatomic) ArkObject *arkObject;
@property (retain, nonatomic) QQApiMiniProgramObject *miniProgramObject;

+ (id)reqWithArkContent:(id)a0;
+ (id)reqWithMiniContent:(id)a0;
+ (id)reqWithContent:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;

@end
