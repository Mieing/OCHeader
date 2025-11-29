@class NSMutableArray, HTSLivePetEffectInfo;

@interface IESLivePetRabbitMessageQueue : NSObject

@property (retain, nonatomic) NSMutableArray *messsageQueue;
@property (retain, nonatomic) HTSLivePetEffectInfo *frontMessage;

- (void)pushMessage:(id)a0;
- (void)popMessage;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)init;
- (long long)length;

@end
