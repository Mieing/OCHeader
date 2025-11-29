@class NSArray, UIImageView, UIView;

@interface AWEShareTokenNotePlayRemoteCardView : AWEShareTokenNoteBaseCardView

@property (retain, nonatomic) NSArray *URLModelList;
@property (retain, nonatomic) UIImageView *centerCoverImageView;
@property (retain, nonatomic) UIView *blurView;

- (void)setupUIWithModel:(id)a0;
- (id)initWithModel:(id)a0 URLModelList:(id)a1;
- (void)goToPlayRemote;
- (void).cxx_destruct;

@end
