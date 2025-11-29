@class NSString;

@interface AWEManageVideoCommentAreaManager : NSObject <AWEIMSettingModelUpdateMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didUpdateIMSetting:(BOOL)a0 source:(id)a1 currentModel:(id)a2;
- (void)getUserAuthorizationStateFromCache;
- (BOOL)getCommentTrendGoodsAuthState;
- (BOOL)getCommentRelatedReadingAuthState;
- (BOOL)getCommentRelatedVideoAuthState;
- (BOOL)getVideoSearchSameGoodsAuthState;
- (BOOL)getCommentRelatedSearchAuthState;
- (void)setCommentTrendGoodsAuthState:(BOOL)a0;
- (void)setCommentRelatedReadingAuthState:(BOOL)a0;
- (void)setCommentRelatedVideoAuthState:(BOOL)a0;
- (void)setVideoSearchSameGoodsAuthState:(BOOL)a0;
- (void)setCommentRelatedSearchAuthState:(BOOL)a0;
- (void)postUserAuthorizationState:(BOOL)a0 forKey:(id)a1;
- (BOOL)getUserAuthorizationStateForKey:(id)a0;
- (void)setUserAuthorizationState:(BOOL)a0 ForKey:(id)a1;
- (id)init;
- (void)dealloc;

@end
