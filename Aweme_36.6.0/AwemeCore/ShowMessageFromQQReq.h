@class QQApiObject;

@interface ShowMessageFromQQReq : QQBaseReq

@property (retain, nonatomic) QQApiObject *message;

+ (id)reqWithContent:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;

@end
