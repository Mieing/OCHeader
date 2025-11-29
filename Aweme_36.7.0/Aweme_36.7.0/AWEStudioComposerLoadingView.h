@class NSString, UIView;
@protocol ACCTextLoadingViewProtcol;

@interface AWEStudioComposerLoadingView : NSObject <AWEStudioComposerFlowMessage>

@property (nonatomic) BOOL didDismiss;
@property (retain, nonatomic) UIView<ACCTextLoadingViewProtcol> *progressView;
@property (nonatomic) double delay;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ closeActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)resetUserInteractionEnabled:(BOOL)a0;
+ (void)p_resetUserInteractionEnabled:(BOOL)a0;

- (void)composerFlowWillEnter:(id)a0;
- (void)showIfNeeded;
- (void)p_showImpl;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
