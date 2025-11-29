@class _TtC18AWENoticeSwiftImpl28InteractionNoticeDataContext;

@interface AWENoticeSwiftImpl.InteractionNoticeUnreadCountManager : NSObject {
    void /* unknown type, empty encoding */ _noticeUnreadCount;
    void /* unknown type, empty encoding */ _likeUnreadCount;
    void /* unknown type, empty encoding */ _commentUnreadCount;
    void /* unknown type, empty encoding */ _atUnreadCount;
    void /* unknown type, empty encoding */ _danmakuUnreadCount;
    void /* unknown type, empty encoding */ _moreUnreadCount;
    void /* unknown type, empty encoding */ _rewardUnreadCount;
    void /* unknown type, empty encoding */ _recommendUnreadCount;
    void /* unknown type, empty encoding */ _highFansOtherUnreadCount;
    void /* unknown type, empty encoding */ _groupNoticeUnreadCount;
    void /* unknown type, empty encoding */ _groupNoticeApplyingUnreadCount;
    void /* unknown type, empty encoding */ _diggAndOtherCount;
    void /* unknown type, empty encoding */ _mateUnreadCount;
}

@property (nonatomic, readonly) _TtC18AWENoticeSwiftImpl28InteractionNoticeDataContext *dataContext;
@property (nonatomic) long long noticeUnreadCount;
@property (nonatomic) long long likeUnreadCount;
@property (nonatomic) long long commentUnreadCount;
@property (nonatomic) long long atUnreadCount;
@property (nonatomic) long long danmakuUnreadCount;
@property (nonatomic) long long moreUnreadCount;
@property (nonatomic) long long rewardUnreadCount;
@property (nonatomic) long long recommendUnreadCount;
@property (nonatomic) long long highFansOtherUnreadCount;
@property (nonatomic) long long groupNoticeUnreadCount;
@property (nonatomic) long long groupNoticeApplyingUnreadCount;
@property (nonatomic) long long diggAndOtherCount;
@property (nonatomic) long long mateUnreadCount;

- (id)initWithDataContext:(id)a0;
- (void)setupUnreadCount;
- (void).cxx_destruct;
- (id)init;

@end
