@class NSArray;

@interface AWEExtensionSecUIDStorage : AWEExtensionStorage

@property (readonly, nonatomic) NSArray *trackedEvents;

+ (id)sharedSecUIDStorage;

- (BOOL)isEmptyString:(id)a0;
- (id)secUIDStorageKey;
- (id)loginStatusStorageKey;
- (id)getSecUIDsTrackingParamsForTargetSecUID:(id)a0 groupName:(id)a1;
- (id)extractSecIDsWithStatus:(unsigned long long)a0;
- (void)updateSecUID:(id)a0 status:(unsigned long long)a1;
- (void)updateLoginStatus:(BOOL)a0;
- (id)getSecUIDsTrackingParamsForTargetSecUID:(id)a0;
- (void).cxx_destruct;

@end
