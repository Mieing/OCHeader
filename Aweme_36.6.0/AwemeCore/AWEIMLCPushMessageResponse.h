@class PushRefreshActionbarResponse, PushInsertNoticeResponse;

@interface AWEIMLCPushMessageResponse : GPBMessage

@property (retain, nonatomic) PushRefreshActionbarResponse *pushRefreshActionbarResponse;
@property (nonatomic) BOOL hasPushRefreshActionbarResponse;
@property (retain, nonatomic) PushInsertNoticeResponse *pushInsertNoticeResponse;
@property (nonatomic) BOOL hasPushInsertNoticeResponse;

+ (id)descriptor;

@end
