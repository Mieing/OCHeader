@class AWEFeedSchedulePostReviewViewModel, DUXContentSheet, NSString, DUXBaseStackView, DUXBaseImageView, DUXBaseButton, DUXBaseLabel;

@interface AWEFeedSchedulePostReviewViewController : UIViewController <DUXBasicSheetProtocol>

@property (retain, nonatomic) AWEFeedSchedulePostReviewViewModel *viewModel;
@property (retain, nonatomic) DUXBaseImageView *iconImageView;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) DUXBaseLabel *messageLabel;
@property (retain, nonatomic) DUXBaseStackView *buttonStackView;
@property (retain, nonatomic) DUXBaseButton *cancelButton;
@property (retain, nonatomic) DUXBaseButton *confirmButton;
@property (weak, nonatomic) DUXContentSheet *sheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dux_titleForColoseButton;
- (void)cancelButtonDidTap:(id)a0;
- (void)confirmButtonDidTap:(id)a0;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;

@end
