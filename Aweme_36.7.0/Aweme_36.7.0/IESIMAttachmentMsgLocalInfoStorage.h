@class NSString;

@interface IESIMAttachmentMsgLocalInfoStorage : NSObject <IESIMAttachmentMsgLocalInfoStorageInterface, IESIMChatDataManagerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
