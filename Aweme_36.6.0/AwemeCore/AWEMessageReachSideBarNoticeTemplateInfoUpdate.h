@class NSString;

@interface AWEMessageReachSideBarNoticeTemplateInfoUpdate : NSObject <AWEMessageReachSideBarNoticeTemplateInfoUpdateProtocol>

@property (copy, nonatomic) NSString *templateID;
@property (nonatomic) long long unreadCnt;
@property (nonatomic) double lastestTime;
@property (nonatomic) BOOL degraded;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
