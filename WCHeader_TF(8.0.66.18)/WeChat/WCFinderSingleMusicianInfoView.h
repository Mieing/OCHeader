@class UIView, WCFinderFittingWidthRichView, NSString, UIImageView, WCFinderAuthInfoIconView, FinderContact, WCFinderHeadImageView, UILabel;
@protocol WCFinderSingleMusicianInfoViewDelegate;

@interface WCFinderSingleMusicianInfoView : MMUIView <WCFinderFittingWidthRichViewDelegate>

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *authInfoLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) WCFinderFittingWidthRichView *richTextView;
@property (retain, nonatomic) UILabel *friendFollowLabel;
@property (retain, nonatomic) FinderContact *contact;
@property (weak, nonatomic) id<WCFinderSingleMusicianInfoViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)signatureDisplayText:(id)a0;
- (void)updateWithSingerInfo:(id)a0 expand:(BOOL)a1;
- (void)adjustAllSubviews;
- (void)onRichView:(id)a0 expandChanged:(BOOL)a1;
- (void).cxx_destruct;

@end
