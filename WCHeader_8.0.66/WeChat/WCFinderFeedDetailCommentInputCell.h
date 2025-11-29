@class UIView, NSString, UITapGestureRecognizer, WCFinderFeedContentVM, MMHeadImageView, UIImageView, WCFinderCommentIdentityActionSheetView, MMUIButton;
@protocol WCFinderFeedDetailCommentInputCellDelegate;

@interface WCFinderFeedDetailCommentInputCell : UITableViewCell <WCActionSheetDelegate>

@property (retain, nonatomic) UIView *fakeInputView;
@property (retain, nonatomic) MMHeadImageView *avatarImageView;
@property (retain, nonatomic) MMUIButton *fakeInputLabel;
@property (retain, nonatomic) UIImageView *identitySwitchView;
@property (retain, nonatomic) UITapGestureRecognizer *identitySwitchGesture;
@property (retain, nonatomic) WCFinderCommentIdentityActionSheetView *identitySwitchSheet;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long identitySwitchType;
@property (weak, nonatomic) id<WCFinderFeedDetailCommentInputCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)updateUI;
- (void)setupFakeInputView;
- (void)reloadIdentitySwitchView;
- (id)createIndetitySwitchView;
- (void)updateWithContentVM:(id)a0 type:(unsigned long long)a1;
- (void)updateCommentIdeneityType:(unsigned long long)a0;
- (void)updateCurrentIdentity;
- (void)fakeInputLabelClicked;
- (void)identitySwitchClicked;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void).cxx_destruct;

@end
