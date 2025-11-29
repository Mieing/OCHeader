@class AWEIMEncryptedMessageViewModel, NSString, NSArray, AWEIMMessageAttachmentDownloadViewModel, NSAttributedString, AWEIMMessage, UIImage, AWEIMMessageConversation, NSNumber;

@interface AWEIMGroupOwnerMessagesListCellViewModel : NSObject

@property (retain, nonatomic) AWEIMEncryptedMessageViewModel *encryptedMessageViewModel;
@property (retain, nonatomic) AWEIMMessageAttachmentDownloadViewModel *videoDownloadViewModel;
@property (retain, nonatomic) NSNumber *messageUnavailableNumber;
@property (nonatomic) BOOL hasSetupImage;
@property (retain) AWEIMMessageConversation *conversation;
@property (copy) NSString *userName;
@property (copy) NSString *messageContent;
@property (copy) NSString *messageSendDate;
@property (copy) NSArray *avatarURLList;
@property (retain) AWEIMMessage *message;
@property (retain, nonatomic) NSString *cellIdentifier;
@property (nonatomic) unsigned long long cellSubtype;
@property (copy, nonatomic) NSAttributedString *attributedContentString;
@property (retain, nonatomic) UIImage *contentImage;
@property (nonatomic) BOOL isUnfolded;
@property (nonatomic) double foldedCellHeight;
@property (nonatomic) BOOL isMessageUnavailable;

+ (id)cellIdentifierForMessage:(id)a0;
+ (unsigned long long)cellSubtypeForMessage:(id)a0;
+ (id)attributedContentFormMessage:(id)a0;
+ (id)imageUrlListFromMessage:(id)a0;
+ (BOOL)isMessageUnavailable:(id)a0;
+ (id)contentAttributes;

- (id)imageUrlList;
- (void)__setupImageFromEncryptedImageMessage:(id)a0;
- (void)__setupImageFromLocalVideoMessage:(id)a0;
- (void)__setupImage;
- (void).cxx_destruct;

@end
