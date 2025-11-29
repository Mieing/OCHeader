@interface AWEIMEmoticonHotWordManager : NSObject

+ (id)defalutManager;

- (void)fetchHotWordsIfNeeded;
- (id)topSearchWordsStorageKey;
- (void)fetchHotWordsCore;
- (unsigned long long)caculateCustomLengthWithKeyword:(id)a0;
- (id)searchedKeysStorageKey;
- (void)didSearchKeyword:(id)a0;
- (id)oftenSearchWordsArray;
- (id)topSearchWordsArray;
- (id)hotWordsArray;
- (id)currentUserID;

@end
