@class DUXBaseLabel, DUXBaseImageView, DUXBaseButton;

@interface AWENewsAISmartFeedNetWorkErrorPage : UIView

@property (retain, nonatomic) DUXBaseImageView *offlineImageView;
@property (retain, nonatomic) DUXBaseLabel *errorLabel;
@property (retain, nonatomic) DUXBaseLabel *hintLabel;
@property (retain, nonatomic) DUXBaseButton *refreshButton;
@property (copy, nonatomic) id /* block */ refreshBlock;

- (void)makeConstraint;
- (void)refreshButtonClicked;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
