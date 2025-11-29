@class NSString;

@interface AWEIMSecurityGlobalToastStore : NSObject

@property (nonatomic) unsigned long long limit;
@property (copy, nonatomic) NSString *bizType;

- (id)completeStoreContentForDialog:(id)a0;
- (id)uncompleteInfoForDialog:(id)a0;
- (void)addUncompleteInfoForDialog:(id)a0 completeInfo:(id)a1;
- (id)fetchDialog;
- (void)removeUncompleteInfoForDialog:(id)a0;
- (void)storeCompleteDialog:(id)a0 content:(id)a1;
- (long long)showCountForDialog:(id)a0;
- (id)fetchFloaterDialog;
- (void)updateShowCountForDialog:(id)a0;
- (id)__unCompleteStoreKey;
- (id)__completeStoreKey;
- (id)__completeStoreItemKeyForToastCode:(id)a0 bizID:(id)a1;
- (void).cxx_destruct;

@end
