@class UIImageView, UILabel, RichTextView, UIButton;
@protocol WCFinderFinderSettingCloseEduViewControllerDelegate;

@interface WCFinderFinderSettingCloseEduViewController : MMUIViewController

@property (retain, nonatomic) UIImageView *errImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) RichTextView *descTextView;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (weak, nonatomic) id<WCFinderFinderSettingCloseEduViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void)onClickCloseAction;
- (void).cxx_destruct;

@end
