@class NSDictionary;

@interface AWEProfileFavoritePOIRedDotNode : AWEProfileFavoriteSecondTabRedDotBaseNode

@property (nonatomic) BOOL hasDisappeared;
@property (copy, nonatomic) NSDictionary *bizData;

- (void)updateCurrentModel:(BOOL)a0;
- (void)endPolling;
- (void)redDotDismissedWithReason:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)startPolling;

@end
