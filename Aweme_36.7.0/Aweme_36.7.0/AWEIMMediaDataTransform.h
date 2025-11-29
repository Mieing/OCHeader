@class NSString;

@interface AWEIMMediaDataTransform : NSObject <IESIMAwemeFeedProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;
+ (void)transformFromMessage:(id)a0 needRequest:(BOOL)a1 requestScene:(id)a2 completion:(id /* block */)a3;
+ (void)autoFetchAwemeForItemID:(id)a0 requestScene:(id)a1 completion:(id /* block */)a2;
+ (void)transformFromItemID:(id)a0 needRequest:(BOOL)a1 requestScene:(id)a2 completion:(id /* block */)a3;
+ (id)p_transformFromDisplayableMessage:(id)a0;
+ (id)transformFromMessageList:(id)a0 requestScene:(id)a1 completion:(id /* block */)a2;
+ (id)awemeIDWithMessageDict;
+ (id)keyForItemID:(id)a0;
+ (id)awemeIDWithShareUidDict;
+ (void)transformFromMessage:(id)a0 requestScene:(id)a1 completion:(id /* block */)a2;
+ (void)bindMessageForAweme:(id)a0 withMessage:(id)a1;
+ (BOOL)disableIMInputBarForAweme:(id)a0;
+ (id)placeholderForMessage:(id)a0;
+ (id)getMessageWithAwemeID:(id)a0;
+ (id)getShareUidWithAwemeID:(id)a0;

- (id)instance_transformFromMessageList:(id)a0 requestScene:(id)a1 completion:(id /* block */)a2;
- (void)instance_transformFromMessage:(id)a0 needRequest:(BOOL)a1 requestScene:(id)a2 completion:(id /* block */)a3;
- (id)transformFromDisplayableMessage:(id)a0;
- (BOOL)supportItemIDForMessage:(id)a0;
- (id)itemIDForMessage:(id)a0;

@end
