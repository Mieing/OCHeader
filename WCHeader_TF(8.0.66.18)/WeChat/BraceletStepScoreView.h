@class SportRecord, BraceletRankNewLikeButton;
@protocol BraceletStepScoreDelegate;

@interface BraceletStepScoreView : UIView

@property (nonatomic) unsigned int score;
@property (nonatomic) unsigned int likeCount;
@property (nonatomic) BOOL isLike;
@property (nonatomic) BOOL isSelf;
@property (retain, nonatomic) SportRecord *record;
@property (retain, nonatomic) BraceletRankNewLikeButton *likeButton;
@property (weak, nonatomic) id<BraceletStepScoreDelegate> delegate;

+ (double)calculateHeight:(id)a0;
+ (id)getDisplayRecord:(id)a0;

- (id)initWithScore:(unsigned int)a0 likeCount:(unsigned int)a1 isLike:(BOOL)a2 isSelf:(BOOL)a3 arrRecords:(id)a4 width:(double)a5;
- (void)initView;
- (void)onClickLikeButton:(id)a0;
- (void)clickLikeAnimate:(BOOL)a0;
- (void)clickUnlikeAnimate:(BOOL)a0;
- (void)onClickRecordButton;
- (id)removeAllNumberAndComma:(id)a0;
- (void).cxx_destruct;

@end
