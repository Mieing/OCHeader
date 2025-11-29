@class NSString;

@interface IESIMStickerBusinessService : NSObject <IESIMStickerBusinessService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)createEmoticonSearchVCWithConversationID:(id)a0 searchString:(id)a1 source:(id)a2;
- (id)emoticonModelFromSearchResult:(id)a0;

@end
