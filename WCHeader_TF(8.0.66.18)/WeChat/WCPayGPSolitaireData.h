@class NSString, NSDictionary, NSArray, SolitaireObj;

@interface WCPayGPSolitaireData : NSObject

@property (retain, nonatomic) NSString *launchTheme;
@property (retain, nonatomic) NSDictionary *solitaireItems;
@property (retain, nonatomic) NSArray *contactList;
@property (retain, nonatomic) NSDictionary *user2Content;
@property (retain, nonatomic) NSArray *confirmContactList;
@property (retain, nonatomic) NSArray *launchSolitaireItems;
@property (retain, nonatomic) SolitaireObj *solitaireOriginData;

- (void).cxx_destruct;

@end
