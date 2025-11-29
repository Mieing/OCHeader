@class AWEIMTopNoticeTipView, AWEIMTopNoticeTipViewConfig, NSString;
@protocol AWEIMTopNoticeTipInteractorProtocol, AWEIMStrangerCommonTopTipViewInteractorDelegate;

@interface AWEIMStrangerCommonTopTipViewInteractor : NSObject <AWEIMSyncPriorityDispatchObjectProtocol>

@property (retain, nonatomic) AWEIMTopNoticeTipView *noticeTipView;
@property (nonatomic) BOOL showing;
@property (retain, nonatomic) AWEIMTopNoticeTipViewConfig *config;
@property (weak, nonatomic) id<AWEIMTopNoticeTipInteractorProtocol> topTipViewDelegate;
@property (weak, nonatomic) id<AWEIMStrangerCommonTopTipViewInteractorDelegate> delegate;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)showTipViewWithConfig:(id)a0;
- (struct CGSize { double x0; double x1; })getNoticeTipSize;
- (void).cxx_destruct;
- (void)dismissView;

@end
