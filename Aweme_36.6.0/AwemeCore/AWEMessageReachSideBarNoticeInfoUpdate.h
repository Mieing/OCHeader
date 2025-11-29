@class NSString, NSArray;

@interface AWEMessageReachSideBarNoticeInfoUpdate : NSObject <AWEMessageReachSideBarNoticeInfoUpdateProtocol>

@property (copy, nonatomic) NSString *triggerSource;
@property (nonatomic) double noticeSendTime;
@property (copy, nonatomic) NSArray *unreadTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUnreadTemplates:(id)a0 noticeSendTime:(double)a1 triggerSource:(id)a2;
- (void).cxx_destruct;

@end
