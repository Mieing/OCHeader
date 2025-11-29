@class CSJAdCallListenModel, CTCallCenter;

@interface CSJAdCallActionManager : NSObject

@property (retain, nonatomic) CSJAdCallListenModel *listenInfoModel;
@property (retain, nonatomic) CTCallCenter *callCenter;

+ (id)sharedManager;

- (void)startCallListener;
- (BOOL)handelActionWithModel:(id)a0 WithIsWebPage:(BOOL)a1 context:(id)a2;
- (void)listenCall:(id)a0 source:(id)a1;
- (void)callStatus:(id)a0 WithIsWeb:(BOOL)a1;
- (void)callAdModel:(id)a0;
- (void)trackCallAdLabel:(id)a0;
- (void)handelActionWithModel:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
