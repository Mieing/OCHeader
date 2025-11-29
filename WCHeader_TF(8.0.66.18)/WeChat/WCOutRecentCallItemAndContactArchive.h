@class WCOutPhoneContact, WCOutRecentCallItem;

@interface WCOutRecentCallItemAndContactArchive : NSObject

@property (retain, nonatomic) WCOutRecentCallItem *lastCallItem;
@property (retain, nonatomic) WCOutPhoneContact *contact;

- (void).cxx_destruct;

@end
