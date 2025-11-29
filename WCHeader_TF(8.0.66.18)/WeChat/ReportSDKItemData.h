@class NSString, ReportTime, ReportSDKItem;

@interface ReportSDKItemData : WXPBGeneratedMessage

@property (retain, nonatomic) ReportSDKItem *item;
@property (retain, nonatomic) NSString *eventId;
@property (retain, nonatomic) ReportTime *eventTime;
@property (retain, nonatomic) NSString *dataJson;
@property (retain, nonatomic) NSString *localItemRequestId;
@property (nonatomic) unsigned int itemRetryCnt;

+ (void)initialize;

- (void)setItemRetryCnt:(unsigned int)a0;
- (unsigned int)itemRetryCnt;
- (void)setLocalItemRequestId:(id)a0;
- (id)localItemRequestId;
- (void)setDataJson:(id)a0;
- (id)dataJson;
- (void)setEventTime:(id)a0;
- (id)eventTime;
- (void)setEventId:(id)a0;
- (id)eventId;
- (void)setItem:(id)a0;
- (id)item;

@end
