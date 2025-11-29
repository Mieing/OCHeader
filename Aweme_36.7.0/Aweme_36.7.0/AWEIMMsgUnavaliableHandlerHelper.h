@class NSString;

@interface AWEIMMsgUnavaliableHandlerHelper : NSObject <AWEIMMsgUnavaliableHandlerHelperInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)createPlayletUnavaliableHandlerWithComponentCenter:(id)a0;
- (id)createShareMixVideoUnavaliableHandlerWithComponentCenter:(id)a0;
- (id)createPOIUpdateHandlerWithComponentCenter:(id)a0;
- (id)createShareH5GoodsUpdateHandlerWithComponentCenter:(id)a0;
- (id)createPlayletUnavaliableHandlerWithConversationContext:(id)a0;
- (id)createShareMixVideoUnavaliableHandlerWithConversationContext:(id)a0;
- (id)createPOIUpdateHandlerWithConversationContext:(id)a0;
- (id)createShareH5GoodsUpdateHandlerWithConversationContext:(id)a0;

@end
