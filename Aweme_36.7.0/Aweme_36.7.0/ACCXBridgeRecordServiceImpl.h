@class RACSignal, NSString, RACSubject;

@interface ACCXBridgeRecordServiceImpl : NSObject <ACCXBridgeRecordService>

@property (retain, nonatomic) RACSubject *completeDownloadForceBindMusicSubject;
@property (readonly, nonatomic) RACSignal *completeDownloadForceBindMusicSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)send_completeDownloadForceBindMusicSignal:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
