@class UILabel, NSString, UITextField, UIImageView, UIView, ACCButton, UIButton;
@protocol AWECloudAlbumCreateAlbumViewDelegate;

@interface AWECloudAlbumCreateAlbumView : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UIView *headerContainer;
@property (retain, nonatomic) UIButton *close;
@property (retain, nonatomic) UIView *bodyContainer;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) ACCButton *completeBtn;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UITextField *albumName;
@property (retain, nonatomic) UIImageView *icon;
@property (weak, nonatomic) id<AWECloudAlbumCreateAlbumViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)completeBtnClicked;
- (void)makeConstaint;
- (void)drawCorner;
- (void)textFieldTextChanged:(id)a0;
- (void)updateBtnState;
- (void)enableUpload:(BOOL)a0;
- (void)closeBtnTodismissView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)updateContent;
- (void)layoutSubviews;
- (void)setupUI;

@end
