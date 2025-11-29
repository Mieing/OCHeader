@class NSString;

@interface ReportSDKItemConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int itemType;
@property (retain, nonatomic) NSString *itemId;
@property (retain, nonatomic) NSString *eventId;
@property (nonatomic) BOOL needReport;
@property (nonatomic) unsigned int intervalMs;
@property (nonatomic) int middleActionType;

+ (void)initialize;

- (void)setMiddleActionType:(int)a0;
- (int)middleActionType;
- (void)setIntervalMs:(unsigned int)a0;
- (unsigned int)intervalMs;
- (void)setNeedReport:(BOOL)a0;
- (BOOL)needReport;
- (void)setEventId:(id)a0;
- (id)eventId;
- (void)setItemId:(id)a0;
- (id)itemId;
- (void)setItemType:(unsigned int)a0;
- (unsigned int)itemType;

@end
