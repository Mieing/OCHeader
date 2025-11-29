@interface AFDServiceCommonAdapterDefault : NSObject

+ (BOOL)collectButtonStyleIsEnabled;

- (BOOL)collectExposeShowCollect;
- (BOOL)collectExposeShowCollectCount;
- (long long)collectExposeCollectBtnIndex;
- (BOOL)closeFriendsIsEnabled;
- (unsigned long long)familiarFeedStrategyDefaultValue;
- (id)getEmptyFriendsHint;

@end
