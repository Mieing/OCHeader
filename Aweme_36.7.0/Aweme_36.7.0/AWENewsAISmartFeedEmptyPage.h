@class DUXBaseLabel, DUXBaseImageView, DUXBaseButton;

@interface AWENewsAISmartFeedEmptyPage : UIView

@property (retain, nonatomic) DUXBaseImageView *douyinBoxImageView;
@property (retain, nonatomic) DUXBaseLabel *errorDescLabel;
@property (retain, nonatomic) DUXBaseLabel *hintLabel;
@property (retain, nonatomic) DUXBaseButton *refreshButton;
@property (copy, nonatomic) id /* block */ refreshBlock;

- (void)makeConstraint;
- (void)refreshButtonClicked;
- (void).cxx_destruct;
- (id)init;
- (void)setErrorDesc:(id)a0;
- (void)setupUI;

@end
