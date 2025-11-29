@class NSString;

@interface IESIMEmoticonQuickReplyUtility : NSObject <IESIMEmoticonQuickReplyUtility>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)isValidQuickReplyGiphyMessage:(id)a0;
- (BOOL)canShowEmojiQuickReplyWithMessage:(id)a0;
- (void)markQuickReplyExitWithMessage:(id)a0 completion:(id /* block */)a1;
- (BOOL)giphyMessageQuickReplyEnabledInCon:(id)a0;
- (id)quickReplyActionBarItemWithStickerQuickReply:(id)a0;
- (id)quickReplyTrackParamsWithStickerQuickReply:(id)a0;

@end
