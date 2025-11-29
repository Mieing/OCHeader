@class NSString, WCFinderRedDotCtrlInfo, WCFinderRedDotTipsShowInfo;

@interface FindFriendRedDotEvent : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *existControlInfo;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *controlInfo;
@property (retain, nonatomic) WCFinderRedDotTipsShowInfo *existShowInfo;
@property (retain, nonatomic) WCFinderRedDotTipsShowInfo *showInfo;

- (void).cxx_destruct;

@end
