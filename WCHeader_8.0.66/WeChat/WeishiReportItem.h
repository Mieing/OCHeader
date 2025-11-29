@class NSString;

@interface WeishiReportItem : NSObject

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) int scene;
@property (nonatomic) unsigned long long shootEntranceStartTime;
@property (nonatomic) unsigned int weishiEntranceShowedCount;
@property (nonatomic) int shootEntranceEndType;
@property (nonatomic) unsigned long long shootEntranceEndTime;
@property (nonatomic) unsigned long long weishiEntranceClickTime;
@property (nonatomic) int alertType;
@property (nonatomic) unsigned long long alertClickTime;
@property (nonatomic) int alertSelectType;
@property (nonatomic) unsigned long long jumpOutTime;

- (void).cxx_destruct;

@end
