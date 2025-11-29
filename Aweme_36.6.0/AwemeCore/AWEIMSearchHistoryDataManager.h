@interface AWEIMSearchHistoryDataManager : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)recordHistory:(id)a0;
- (id)historyStorageModelList;
- (void)cleanHistory;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
