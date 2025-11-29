@class NSString;

@interface AWEConcernInteractionCoreTracker : NSObject <AWEConcernInteractionCoreTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addConcernExtraParamsForPostComment:(id)a0 logExtraDict:(id)a1 referString:(id)a2 aweme:(id)a3;
+ (void)addCommonExtraParams:(id)a0 logExtraDict:(id)a1 referString:(id)a2 aweme:(id)a3;
+ (void)addConcernExtraParamsForLike:(id)a0 logExtraDict:(id)a1 referString:(id)a2 aweme:(id)a3;
+ (void)addConcernExtraParamsForEnterPersonalDetail:(id)a0 logExtraDict:(id)a1 referString:(id)a2 aweme:(id)a3;
+ (void)addConcernExtraParamsForShareVideo:(id)a0 logExtraDict:(id)a1 referString:(id)a2 aweme:(id)a3;
+ (void)addConcernExtraParamsForClickMoreButton:(id)a0 logExtraDict:(id)a1 referString:(id)a2 aweme:(id)a3;
+ (void)addConcernExtraParamsForClickCommentButton:(id)a0 logExtraDict:(id)a1 referString:(id)a2 aweme:(id)a3;
+ (void)addConcernExtraParamsForFavouriteVideo:(id)a0 logExtraDict:(id)a1 referString:(id)a2 aweme:(id)a3;


@end
