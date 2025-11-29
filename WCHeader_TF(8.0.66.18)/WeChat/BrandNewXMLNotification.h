@class NSString, BrandNewXMLNotificationAccountInfo, BrandNewXMLNotificationMsgInfo;

@interface BrandNewXMLNotification : MMObject

@property (copy, nonatomic) NSString *plain;
@property (retain, nonatomic) BrandNewXMLNotificationAccountInfo *accountInfo;
@property (retain, nonatomic) BrandNewXMLNotificationMsgInfo *msgInfo;

- (void).cxx_destruct;

@end
