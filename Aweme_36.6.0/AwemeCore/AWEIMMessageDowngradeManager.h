@class NSDictionary, NSString;

@interface AWEIMMessageDowngradeManager : NSObject <AWEIMMessageDowngradeManagerProtocol>

@property (retain, nonatomic) NSDictionary *messageList;
@property (retain, nonatomic) NSDictionary *noticeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)defaultDowngradeMessageList;
- (id)defaultDowngradeNoticeList;
- (BOOL)shouldDowngradeWithMsgType:(long long)a0 aweType:(long long)a1;
- (BOOL)shouldDowngradeNoticeWithMsgType:(long long)a0 aweType:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
