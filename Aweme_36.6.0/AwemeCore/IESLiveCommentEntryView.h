@class UIButton;

@interface IESLiveCommentEntryView : IESLiveCommentEntryBaseView

@property (retain, nonatomic) UIButton *aiCloneBtn;

- (void)aiCloneEntryChangeToShow:(BOOL)a0;
- (void)setupBgImageView;
- (void)setupInnerButton;
- (void)setupExpandButton;
- (void)setupEntryTheme;
- (id)getCustomEntryTitle;
- (id)entryViewType;
- (void)commentEntryUpdate;
- (void)commentEntryDidUnMount;
- (void)commentEntryDidMount;
- (void)updateInnerButtonConstraints;
- (void)setupAICloneButton;
- (void).cxx_destruct;

@end
