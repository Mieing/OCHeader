@class NSDictionary, NSString;

@interface AWEIMGeneralTotalUnreadCountObserver : AWEIMTotalUnreadCountObserver <IESIMGeneralTotalUnreadCountObserverService>

@property (nonatomic) int newUnreadCount;
@property (copy, nonatomic) NSDictionary *cidToUnreadCountDict;
@property (nonatomic) int boxType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unreadCountForUser:(long long)a0 changeTo:(int)a1 cidToUnreadCountDict:(id)a2;
- (void)unreadCountForUser:(long long)a0 changeTo:(int)a1 cidToUnreadCountDict:(id)a2 boxType:(int)a3;
- (void).cxx_destruct;

@end
