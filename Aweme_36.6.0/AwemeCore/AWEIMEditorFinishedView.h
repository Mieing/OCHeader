@class NSString, ACCButton, AWEEditGradientView;

@interface AWEIMEditorFinishedView : UIView <AWEIMEditorEditFinishViewProtocol>

@property (retain, nonatomic) ACCButton *finishButton;
@property (copy, nonatomic) NSString *sendButtonTitle;
@property (retain, nonatomic) AWEEditGradientView *grandientView;
@property (nonatomic) BOOL isInStoryPublicPage;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupLayout;
- (void)finishButtonDidClick;
- (id)initWithSuperView:(id)a0 isInStoryPublicPage:(BOOL)a1;
- (id)initWithSuperView:(id)a0 title:(id)a1 isInStoryPublicPage:(BOOL)a2;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
