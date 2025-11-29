@class NSString, NSMutableSet, NSMutableDictionary;

@interface IESLiveInteractionPlayModeServiceImp : NSObject <IESLiveInteractionPlayModeService>

@property (retain, nonatomic) NSMutableSet *tasks;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) NSMutableDictionary *playModeInfoSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)isPrefetch:(int)a0;
- (void)receiveLinkmicPreloadPlayModeInfo:(id)a0;
- (void)fetchPlayModeInfoWithType:(int)a0 complete:(id /* block */)a1;
- (BOOL)isSupportPreload:(int)a0;
- (void)executeCallBack:(id)a0 source:(int)a1;
- (void)requestPlayModeInfoIfNeed;
- (void)executeCallBack:(id)a0 error:(id)a1 source:(int)a2;
- (void).cxx_destruct;
- (id)init;

@end
