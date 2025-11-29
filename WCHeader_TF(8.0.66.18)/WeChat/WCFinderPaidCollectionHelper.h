@interface WCFinderPaidCollectionHelper : NSObject

+ (id)tryOutTipsContentWithPaidCollection:(id)a0;
+ (id)reportURLWithPaidCollection:(id)a0;
+ (id)collectionTypeTagWithPaidCollection:(id)a0;
+ (id)feedCountDescWithPaidCollection:(id)a0;
+ (id)consumeButtonTitleWithPaidCollection:(id)a0;
+ (id)feedWatchProgressTextWithContentVM:(id)a0 forchComplete:(BOOL)a1;
+ (void)openPaidCollectionWithJumpParams:(id)a0;
+ (void)openPaidCollectionDetailWithJumpParams:(id)a0;
+ (void)openPaidCollectionFeedListWithJumpParams:(id)a0;
+ (void)openPaidCollectionWithShareItem:(id)a0 shareScene:(unsigned long long)a1;
+ (void)openPaidCollectionWithShareItem:(id)a0 shareScene:(unsigned long long)a1 viewController:(id)a2;
+ (void)reportProfilePaidCollection:(id)a0 event:(id)a1 commentScene:(int)a2 position:(unsigned long long)a3;

@end
