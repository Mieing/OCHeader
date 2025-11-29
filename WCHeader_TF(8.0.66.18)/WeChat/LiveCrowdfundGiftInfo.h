@class NSString, NSMutableArray;

@interface LiveCrowdfundGiftInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int startTimestamp;
@property (nonatomic) unsigned int endTimestamp;
@property (retain, nonatomic) NSMutableArray *itemList;
@property (retain, nonatomic) NSString *contentText;
@property (nonatomic) unsigned int syncInterval;
@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSString *finishContentText;
@property (retain, nonatomic) NSMutableArray *animationList;
@property (nonatomic) BOOL cancel;
@property (retain, nonatomic) NSMutableArray *landscapeAnimationList;
@property (retain, nonatomic) NSString *finishCarouselText;
@property (retain, nonatomic) NSMutableArray *animationExtInfoList;
@property (retain, nonatomic) NSMutableArray *landscapeAnimationExtInfoList;

+ (void)initialize;

@end
