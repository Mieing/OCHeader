@class WCFinderRedDotTipsShowInfo, WCFinderRedDotCtrlInfo, NSNumber;

@interface WSTabRedDotInfo : NSObject

@property (nonatomic) long long category;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *contentRedDotCtrlInfo;
@property (retain, nonatomic) WCFinderRedDotTipsShowInfo *contentRedDotShowInfo;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *numRedDotCtrlInfo;
@property (retain, nonatomic) WCFinderRedDotTipsShowInfo *numRedDotShowInfo;
@property (retain, nonatomic) NSNumber *numRedDotCount;

- (id)init;
- (id)description;
- (id)getContentRedDotReportParams;
- (id)getNumRedDotReportParams;
- (id)checkToReturnContentRedDotReportInfo;
- (id)checkToReturnNumRedDotReportInfo;
- (id)checkToReturnContentRedDotReportString;
- (id)checkToReturnNumRedDotReportString;
- (void).cxx_destruct;

@end
