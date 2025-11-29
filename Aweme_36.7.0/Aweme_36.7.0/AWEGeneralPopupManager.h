@class NSString, NSMutableDictionary;

@interface AWEGeneralPopupManager : NSObject <AWEPublishTaskMessage, AWEGeneralPopupProtocol>

@property (readonly, nonatomic) NSMutableDictionary *descriptorDictionary;
@property (copy, nonatomic) NSString *lastUserID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)task:(id)a0 willAppendWithInfo:(id)a1;
- (void)presentPopupsAtTiming:(long long)a0 onClose:(id /* block */)a1;
- (void)persistLocalDescriptorsForUserID:(id)a0;
- (void)preparePopupsWithCompletion:(id /* block */)a0;
- (void)registerPopupPresenter;
- (void)loadLocalDescriptorsForUserID:(id)a0;
- (void)updateDescriptorsWithPopups:(id)a0;
- (void)requestPopupsWithCompletion:(id /* block */)a0;
- (id)descriptorForID:(id)a0;
- (id)localDescriptorsKeyForUserID:(id)a0;
- (void)showPopupIfNeedWithTask:(id)a0;
- (void)registerPopupPresenter:(id)a0 forID:(id)a1;
- (void)showPopupAtTiming:(long long)a0 enableAlways:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
