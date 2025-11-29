@class NSLock, NSMutableDictionary, NSString;

@interface IESLiveOpenLiveCheckServiceImpl : NSObject <IESLiveOpenLiveCheckService>

@property (retain, nonatomic) NSMutableDictionary *subscribers;
@property (retain, nonatomic) NSLock *subscribersLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (unsigned long long)mapFromHTSLiveType:(unsigned long long)a0;
- (id)eventNameForCheckScene:(id)a0;
- (void)removeEventSubscriber:(id)a0;
- (void)p_openLivePermissionCheck:(unsigned long long)a0 checkModel:(id)a1 completion:(id /* block */)a2;
- (void)handleOpenLivePermission:(unsigned long long)a0 Error:(id)a1 checkInfo:(id)a2 checkModel:(id)a3 completion:(id /* block */)a4;
- (void)requestOpenLiveCheckPermission:(id)a0 completion:(id /* block */)a1;
- (void)setEventSubscriber:(id)a0 completion:(id /* block */)a1;
- (void)popupPermissionsAlertWithLiveType:(unsigned long long)a0 applyStatus:(long long)a1 enterFrom:(id)a2 eventName:(id)a3;
- (void)showRealNameVerify:(unsigned long long)a0 checkInfo:(id)a1 completion:(id /* block */)a2;
- (void)triggerFaceRecognitionWithScene:(id)a0 flow:(id)a1 ticket:(id)a2 completion:(id /* block */)a3;
- (void)openLivePermissionCheck:(unsigned long long)a0 checkModel:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
