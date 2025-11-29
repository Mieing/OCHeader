@class NSString;
@protocol AWEIMDYOfficialDataManagerProtocol;

@interface AWEIMNoticeOnSideManager : NSObject <AWEOfficialNotificationOtherCountMessageProtocol, AWEIMNoticeOnSideManagerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<AWEIMDYOfficialDataManagerProtocol> officialDataManager;

+ (id)shareInstance;

- (void)onOtherCountChangeReason:(unsigned long long)a0 model:(id)a1;
- (void)markReadForNoticeGroupList:(id)a0 onComplete:(id /* block */)a1;
- (id)expandedCustomserServiceGroups;
- (void).cxx_destruct;
- (id)init;
- (id)notificationManager;
- (void)dealloc;

@end
