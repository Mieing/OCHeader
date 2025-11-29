@class NSDictionary, NSString;

@interface AWEIMSkylightLaunchStorage : NSObject <AWEUserMessage>

@property (copy, nonatomic) NSDictionary *diskSectionData;
@property (copy, nonatomic) id /* block */ snapshotCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)constructDiskSectionData;
+ (void)storageDataFromSectionData:(id)a0;
+ (id)p_constructDiskSectionDataNew;
+ (BOOL)enableBizModelInFriendModels;
+ (id)p_friendStorageKey;
+ (id)p_friendStorageKeyNew;
+ (id)p_constructDiskSectionData;
+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)asyncPreloadSnapshot;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)addCallback:(id /* block */)a0;
- (void)dealloc;

@end
