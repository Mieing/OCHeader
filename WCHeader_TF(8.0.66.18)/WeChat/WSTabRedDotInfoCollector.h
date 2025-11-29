@class WSAllTabRedDotInfo, NSNumber;

@interface WSTabRedDotInfoCollector : NSObject

@property (retain, nonatomic) WSAllTabRedDotInfo *allTabRedDotInfo;
@property (retain, nonatomic) NSNumber *currentBubbleCategory;

- (id)init;
- (void)clear;
- (id)returnAllTabRedDotInfoReportString;
- (unsigned int)returnHaveRedDotBubble:(id)a0;
- (void)configureTabNumberReddot:(id)a0 ctrlInfo:(id)a1 showInfo:(id)a2 category:(long long)a3 extraLog:(id)a4;
- (void)configureTabContentReddot:(id)a0 showInfo:(id)a1 category:(long long)a2 extraLog:(id)a3;
- (id)getBriefInfo;
- (void)reportTabTipsBubbleExpose:(long long)a0;
- (void)reportTabTipsBubbleClick:(long long)a0;
- (void).cxx_destruct;

@end
