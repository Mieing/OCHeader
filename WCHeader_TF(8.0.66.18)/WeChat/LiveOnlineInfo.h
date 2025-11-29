@class NSString, NSMutableArray;

@interface LiveOnlineInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *onlineCountStr;
@property (retain, nonatomic) NSMutableArray *onlineTopRewarderInfos;
@property (nonatomic) BOOL enableFlag;
@property (nonatomic) BOOL replaceFlag;

+ (void)initialize;

@end
