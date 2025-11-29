@class NSString;

@interface LSIMPushNotificationManager : NSObject

@property (nonatomic) BOOL currentShopMarketPushOpen;
@property (nonatomic) BOOL allShopMarketPushOpen;
@property (nonatomic) BOOL currentShopServicePushOpen;
@property (nonatomic) BOOL allShopServicePushOpen;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *shopID;

+ (void)trackSwitchClickedWithShopId:(id)a0 on:(BOOL)a1 enterFrom:(id)a2;

- (void)refreshPushStatus;
- (id)initWithConversationID:(id)a0 shopID:(id)a1;
- (void)updateMarketPushStatus:(id)a0;
- (void)updateServicePushStatus:(id)a0;
- (void).cxx_destruct;
- (void)addNotificationObserver;

@end
