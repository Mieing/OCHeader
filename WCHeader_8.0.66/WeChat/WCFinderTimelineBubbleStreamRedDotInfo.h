@class DelayBubble, FinderSyncTipsShowInfo, WCFinderRedDotCtrlInfo;

@interface WCFinderTimelineBubbleStreamRedDotInfo : NSObject

@property (retain, nonatomic) FinderSyncTipsShowInfo *streamShowInfo;
@property (retain, nonatomic) DelayBubble *finderDeleyBubble;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *findEntryRedCtrlInfo;

+ (id)infoWithShowInfo:(id)a0 ctrlInfo:(id)a1;

- (void).cxx_destruct;

@end
