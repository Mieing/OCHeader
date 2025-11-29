@class NSString, NSArray, UIImage, IESECCommentItemMediaFlowLayout, IESECCommentItemViewLayout, UICollectionView, UILabel, IESECCommentDetailModel;
@protocol IESECCommentItemViewDelegate;

@interface IESECCommentItemView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) NSArray *videos;
@property (retain, nonatomic) NSArray *photos;
@property (nonatomic) long long currentSection;
@property (weak, nonatomic) id<IESECCommentItemViewDelegate> delegate;
@property (retain, nonatomic) IESECCommentItemViewLayout *layout;
@property (retain, nonatomic) IESECCommentItemMediaFlowLayout *mediaCollectionViewLayout;
@property (nonatomic) BOOL isFeedMode;
@property (retain, nonatomic) UICollectionView *mediaContentCollectionView;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) long long mainCommentIndex;
@property (retain, nonatomic) IESECCommentDetailModel *detailModel;
@property (nonatomic) BOOL isNewCommentStyle;
@property (nonatomic) unsigned long long enterFrom;
@property (retain, nonatomic) UIImage *flagIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithImages:(id)a0 videos:(id)a1 content:(id)a2 highlights:(id)a3 dateLabel:(id)a4 isNewAppendCommentStyle:(BOOL)a5 cellWidth:(double)a6;
- (id)initWithCommentItemLayout:(id)a0 delegate:(id)a1;
- (id)initWithCommentItemLayout:(id)a0 delegate:(id)a1 enterFrom:(unsigned long long)a2;
- (void)updateWithImages:(id)a0 videos:(id)a1 content:(id)a2 highlights:(id)a3 dateLabel:(id)a4 isNewAppendCommentStyle:(BOOL)a5;
- (void)changeContentTextColor:(id)a0;
- (void)changeToFeedModeWithTextColor:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)setupUI;

@end
