@class NSArray, NSString, UIView, WCFinderContact;
@protocol WCActionSheetWithHeadAvatarDelegate;

@interface WCActionSheetWithHeadAvatar : WCActionSheet

@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) NSArray *itemsArray;
@property (retain, nonatomic) UIView *finderAvatarView;
@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) UIView *headView;
@property (retain, nonatomic) NSString *shootEntryExtInfo;
@property (weak, nonatomic) id<WCActionSheetWithHeadAvatarDelegate> m_delegate;

- (void)updateContact:(id)a0 itemsArray:(id)a1;
- (id)getCustomHeadView;
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)a0;
- (id)getTipsActionSheetView;
- (id)buildSeparateLine;
- (id)buildButtonWithTitle:(id)a0 subTitle:(id)a1 subTitleColor:(id)a2 showNew:(BOOL)a3 clickBlock:(id /* block */)a4;
- (void)dismissWithClickedButtonIndex:(long long)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
