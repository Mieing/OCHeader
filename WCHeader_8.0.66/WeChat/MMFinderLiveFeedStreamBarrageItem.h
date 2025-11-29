@class NSString, MMLiveCommentDataItem, MMFinderLiveFeedStreamBarrageItemTextView;

@interface MMFinderLiveFeedStreamBarrageItem : NSObject

@property (nonatomic) BOOL stoppedByUser;
@property (nonatomic) double barrageContainerWidth;
@property (weak, nonatomic) MMFinderLiveFeedStreamBarrageItemTextView *textView;
@property (nonatomic) double barrageMoveDuration;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) MMLiveCommentDataItem *commentDataItem;

+ (id)itemWithInfo:(id)a0;

- (double)getBarrageMoveDurationWithConfig:(id)a0;
- (double)getBarrageMoveSpeedWithWidth:(double)a0 config:(id)a1;
- (void).cxx_destruct;

@end
