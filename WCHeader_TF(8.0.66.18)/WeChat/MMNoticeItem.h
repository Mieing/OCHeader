@class NSString;

@interface MMNoticeItem : NSObject

@property (readonly, nonatomic) int isShowNotice;
@property (readonly, nonatomic) NSString *wording;
@property (readonly, nonatomic) NSString *leftIcon;
@property (readonly, nonatomic) NSString *jumpUrl;
@property (readonly, nonatomic) NSString *noticeId;

+ (id)NoticeItemWithIsShowNotice:(int)a0 wording:(id)a1 leftIcon:(id)a2 jumpUrl:(id)a3 noticeId:(id)a4;

- (id)initWithIsShowNotice:(int)a0 wording:(id)a1 leftIcon:(id)a2 jumpUrl:(id)a3 noticeId:(id)a4;
- (id)description;
- (void).cxx_destruct;

@end
