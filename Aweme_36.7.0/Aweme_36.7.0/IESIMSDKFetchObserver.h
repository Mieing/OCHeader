@class NSString;

@interface IESIMSDKFetchObserver : HTSService <IESIMSDKFetchObserver>

@property (nonatomic) BOOL isRequesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isRecentLinkRequesting;
- (void)didStartOfflinePullWithSource:(long long)a0 forUser:(long long)a1 inbox:(int)a2;
- (void)didEndOfflinePullForUser:(long long)a0 inbox:(int)a1 pullerSource:(long long)a2 pullDirection:(unsigned long long)a3 error:(id)a4 hasMore:(BOOL)a5 userInfo:(id)a6;
- (void)didStartFetchEmptyMessagesForConvID:(id)a0 shortID:(long long)a1 conversationType:(unsigned long long)a2 inbox:(int)a3;
- (void)didEndFetchEmptyMessagesForConvID:(id)a0 shortID:(long long)a1 conversationType:(unsigned long long)a2 inbox:(int)a3 error:(id)a4;

@end
