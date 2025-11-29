@class NSString;

@interface AWEProfileMethodManager : NSObject <AWEProfileMethodManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackAvatarWithComponentType:(id)a0 userID:(id)a1 isSecondPage:(BOOL)a2 isClick:(BOOL)a3 isLongPress:(BOOL)a4;
+ (BOOL)shouldShowBrowsingHistory;
+ (id)commonComponentWithUser:(id)a0;
+ (id)watchHistoryUrlWithEnterFrom:(id)a0;
+ (void)openPraisePageWithUser:(id)a0;
+ (void)openWatchHistoryPageWithEnterFrom:(id)a0;
+ (void)openRelationListPageWithUser:(id)a0 isFromHome:(BOOL)a1 type:(unsigned long long)a2 enterFrom:(id)a3;


@end
