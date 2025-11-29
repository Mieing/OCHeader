@class NSString, MMLiveCommentPubbleCellFrame, MMFinderLiveTableStyleCommentPubbleCellFrame, NSNumber;

@interface MMFinderLiveCommentTableViewCellFrame : MMLiveCommentTableViewCellFrame {
    long long _layoutResult;
}

@property (retain, nonatomic) MMLiveCommentPubbleCellFrame *pubbleCellFrame;
@property (nonatomic) double currentCellHeight;
@property (nonatomic) double cellHeightPortrait;
@property (nonatomic) double cellHeightLandscape;
@property (nonatomic) double layoutStandardWidth;
@property (retain, nonatomic) NSString *layoutIdentityKey;
@property (readonly, nonatomic) MMFinderLiveTableStyleCommentPubbleCellFrame *finderPubbleCellFrame;
@property (nonatomic) long long uiStyle;
@property (nonatomic) BOOL isHidePubbleCell;
@property (nonatomic) BOOL needCustomAppend;
@property (nonatomic) BOOL isReported;
@property (retain, nonatomic) NSNumber *customAppendPubbleCellInitTopValue;
@property (retain, nonatomic) NSNumber *customAppendDurationValue;
@property (retain, nonatomic) NSNumber *endDelayDurationValue;
@property (nonatomic) double displayStartTime;
@property (nonatomic) double totalDisplayTime;
@property (readonly, nonatomic) double minDisplayDuration;

- (void)calculateWithCommentInfo:(id)a0 isLastLine:(BOOL)a1;
- (void)calculateWithCommentInfo:(id)a0 isFirstLine:(BOOL)a1;
- (BOOL)isSupportTopDisplayInTable:(id)a0;
- (void)resetCellFrame;
- (double)cellHeight;
- (double)currCellHeight;
- (void)lazyCommentLayoutCurrent;
- (BOOL)isCurrentLayouted;
- (void).cxx_destruct;

@end
