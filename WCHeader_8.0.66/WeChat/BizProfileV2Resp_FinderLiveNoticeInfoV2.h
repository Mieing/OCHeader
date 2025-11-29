@class NSData;

@interface BizProfileV2Resp_FinderLiveNoticeInfoV2 : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *liveNoticeListInfo;
@property (retain, nonatomic) NSData *nextLiveNotificationInfo;

+ (void)initialize;

- (void)setNextLiveNotificationInfo:(id)a0;
- (id)nextLiveNotificationInfo;
- (void)setLiveNoticeListInfo:(id)a0;
- (id)liveNoticeListInfo;

@end
