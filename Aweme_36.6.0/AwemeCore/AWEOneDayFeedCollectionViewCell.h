@class AWEOrangeStoryCellMediaWrapper, AWEOneDayStoryWithCommentModel, NSString;

@interface AWEOneDayFeedCollectionViewCell : UICollectionViewCell <AWEOneDayFeedCollectionCellProtocol>

@property (retain, nonatomic) AWEOrangeStoryCellMediaWrapper *player;
@property (retain, nonatomic) AWEOneDayStoryWithCommentModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)prepareForReuse;
- (BOOL)isPlaying;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
