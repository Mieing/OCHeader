@class NSDictionary, NSMutableSet, NSHashTable;

@interface BDPPrivacyAccessManager : NSObject {
    NSMutableSet *_privacyIDsInUsed;
    NSDictionary *_privacyAccessInfoDict;
}

@property (retain, nonatomic) NSHashTable *delegates;

+ (id)sharedManager;

- (void)registerPrivacyInfo:(id)a0;
- (void)setPrivacy:(long long)a0 isUsing:(BOOL)a1;
- (id)allAccessingPrivacyIDs;
- (id)privatyAccessInfoWithID:(long long)a0;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
