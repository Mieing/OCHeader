@class NSString, BrandNewXMLNotification;

@interface BrandNewXmlNotificationCellViewModel : BrandNotificationCellViewModel

@property (retain, nonatomic) BrandNewXMLNotification *notification;
@property (readonly, nonatomic) NSString *webPageUrl;

+ (BOOL)canCreateViewModelWithMsgWrap:(id)a0;

- (id)cellViewClassName;
- (id)initWithMessage:(id)a0 viewWidth:(double)a1;
- (void)internalInitWithMsg:(id)a0;
- (id)brandContact;
- (id)messageText;
- (void).cxx_destruct;

@end
