@class NSString;

@interface AWEShareServiceExtension_IM : NSObject <AWEShareMessage, AWEAwemeFeedVideoButtonMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shareWithType:(long long)a0 context:(id)a1 targetType:(unsigned long long)a2 targetID:(id)a3;
- (void)didConfigureShareView:(id)a0 withContext:(id)a1;
- (void)didUpdateFeedVideoButton:(id)a0;
- (void)p_showShareList:(unsigned long long)a0;
- (id)init;
- (void)dealloc;

@end
