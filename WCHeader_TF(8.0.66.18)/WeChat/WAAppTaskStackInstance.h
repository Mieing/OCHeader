@class WAAppTansitionController, WAUINavigationController, WAAppOpenParameter, WAAppTaskExtInfo, WAAppTaskHandlerWrapper;

@interface WAAppTaskStackInstance : NSObject

@property (weak, nonatomic) WAUINavigationController *nav;
@property (retain, nonatomic) WAAppOpenParameter *cachedTaskOpenInfo;
@property (retain, nonatomic) WAAppTaskExtInfo *cachedTaskExtInfo;
@property (retain, nonatomic) WAAppTansitionController *cachedTransitionController;
@property (retain, nonatomic) WAAppTaskHandlerWrapper *handlerWrapper;
@property (nonatomic) BOOL enterBackgroundFromQuickReplyMsg;

- (void).cxx_destruct;

@end
