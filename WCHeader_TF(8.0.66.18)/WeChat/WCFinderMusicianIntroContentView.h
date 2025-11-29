@class NSString, WCFinderMultiMusicianInfoView, UILabel, UIView, WCFinderSingleMusicianInfoView;
@protocol WCFinderMusicianIntroContentViewDelegate;

@interface WCFinderMusicianIntroContentView : UICollectionViewCell <WCFinderSingleMusicianInfoViewDelegate, WCFinderMultiMusicianInfoViewDelegate>

@property (retain, nonatomic) UIView *topContentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) WCFinderSingleMusicianInfoView *singleMusicianView;
@property (retain, nonatomic) WCFinderMultiMusicianInfoView *multiMusicianView;
@property (weak, nonatomic) id<WCFinderMusicianIntroContentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildSingleMusicianViewByWidth:(double)a0 delegate:(id)a1;
+ (double)cellHeightByWidth:(double)a0 singerInfoArray:(id)a1 expand:(BOOL)a2;
+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithSingerInfoArray:(id)a0 expand:(BOOL)a1;
- (void)onSingleMusicianClickSingerContact:(id)a0;
- (void)onSingleMusicianSignatureExpand:(BOOL)a0;
- (void)onSingleMusicianClickSignatureAtText:(id)a0;
- (void)onMultiMusicianClickSingerContact:(id)a0;
- (void)onMultiMusicianCard:(id)a0 singerInfo:(id)a1;
- (void).cxx_destruct;

@end
