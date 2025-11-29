@class NSString, UIImageView, UILabel, DUXTextTag;

@interface AWEMusicDetailHeaderTwoLineGeneralView : UIView <AWEMusicDetailMusicHeaderPendantViewProtocol>

@property (retain, nonatomic) DUXTextTag *tagLabel;
@property (nonatomic) BOOL isNewStyle;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (copy, nonatomic) id /* block */ onTap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNewStyle:(BOOL)a0;
- (void)configureWithTitle:(id)a0 subtitle:(id)a1 tag:(id)a2;
- (void)configureWithTitle:(id)a0 subtitle:(id)a1 tag:(id)a2 avatarSize:(struct CGSize { double x0; double x1; })a3;
- (void)updateTagStyle:(long long)a0;
- (void).cxx_destruct;
- (void)tapped;

@end
