@class NSString, UIViewController, NSDictionary;

@interface IESLLPOILiveFloatOnTopProvider : NSObject <IESLLPOILiveFloatOnTop>

@property (weak, nonatomic) UIViewController *targetVC;
@property (weak, nonatomic) UIViewController *fromVC;
@property (copy, nonatomic) NSString *roomID;
@property (nonatomic) BOOL isAttaching;
@property (copy, nonatomic) NSDictionary *logExtraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playLiveFloatOn:(id)a0 from:(id)a1 roomID:(id)a2 tag:(id)a3 logExtra:(id)a4;

- (void)setDismissCompletion:(id /* block */)a0;
- (void)setMuteStateChangedBlock:(id /* block */)a0;
- (void)muteLive:(BOOL)a0;
- (void)setCustomTapBlock:(id /* block */)a0;
- (void)resumeSmallWindowStream;
- (void)pauseSmallWindowStream;
- (void)returnSmallLiveToService;
- (void)clearSmallWindowActionBlock;
- (void)transferViewTo:(id)a0;
- (void)muteLiveWindow:(BOOL)a0;
- (void)updateAttachingState:(BOOL)a0;
- (void)setTapActionOnly;
- (BOOL)getIsLivePipShow;
- (void)publishEventWithWindowTap;
- (void).cxx_destruct;
- (void)detach;
- (void)attach;

@end
