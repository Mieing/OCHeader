@class MMLiveCommentPubbleCell;

@interface MMFinderLiveCommentDirectDisplayCellWrapper : NSObject

@property (nonatomic) BOOL isDisplayStart;
@property (retain, nonatomic) MMLiveCommentPubbleCell *pubbleCell;
@property (nonatomic) double displayTime;
@property (copy, nonatomic) id /* block */ dismissCallback;
@property (copy, nonatomic) id /* block */ tapCallback;

- (id)initWithCell:(id)a0;
- (void)initDefaultDatas;
- (void)addTapGestureIfNeed;
- (BOOL)isSupportTap;
- (void)onDisplayStart;
- (void)autoDismiss;
- (void)onTapGestureRecognizer:(id)a0;
- (void).cxx_destruct;

@end
