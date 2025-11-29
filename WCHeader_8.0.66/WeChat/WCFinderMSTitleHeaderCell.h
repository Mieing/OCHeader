@class UIStackView, NSString, WCFinderHeadImageView, UIImageView, UILabel;

@interface WCFinderMSTitleHeaderCell : WCFinderMSActivityBaseCell <WCFinderDataItemExt>

@property (retain, nonatomic) WCFinderHeadImageView *avatarView;
@property (retain, nonatomic) UIStackView *actionStackView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *authorBadgeLabel;
@property (retain, nonatomic) UIImageView *finderIconImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;
+ (struct CGSize { double x0; double x1; })calculateDisplaySize:(struct CGSize { double x0; double x1; })a0 forVM:(id)a1 cellIdentifier:(id)a2 showSceneIntroduce:(BOOL)a3;
+ (id)displayNameString:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)onContentVMChanged;
- (void)onClickHeader;
- (void)onLongPress:(id)a0;
- (void)onFinderDataItemUpdate:(id)a0 scene:(int)a1 source:(long long)a2;
- (void).cxx_destruct;

@end
