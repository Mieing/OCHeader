@class FinderTipsShowInfo, WCFinderRedDotCtrlInfo;

@interface WCFinderTimelineRedDotBubbleDisplayInfo : NSObject

@property (retain, nonatomic) FinderTipsShowInfo *showInfo;
@property (nonatomic) double showSeconds;
@property (nonatomic) long long bubbleType;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *findEntryRedCtrlInfo;

+ (id)infoWithShowInfo:(id)a0 ctrlInfo:(id)a1 bubbleType:(long long)a2 showSeconds:(double)a3;

- (void).cxx_destruct;

@end
