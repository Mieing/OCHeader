@interface AWEAIGCUnifyLoadingTrackHelper : NSObject

+ (void)trackAIProcessUnifyLoadingWillBeginWith:(id)a0 repository:(id)a1 isLora:(BOOL)a2 isMessage:(BOOL)a3;
+ (void)updateAigcTrackAIProcessResultInfoWithRepository:(id)a0;
+ (void)trackShowUnifyLoadingViewWithRepository:(id)a0 aigcLoadingType:(long long)a1 aigcEstimatedDuration:(long long)a2;
+ (void)trackUnifyLoadingViewShowFailureIfNeededWithRepository:(id)a0 shouldHiddenRetryButton:(BOOL)a1 createPortraitLimit:(BOOL)a2;
+ (void)trackUnifyLoadingViewExitWithRepository:(id)a0 clickType:(id)a1 aigcLoadingType:(long long)a2 aigcEstimatedDuration:(long long)a3;
+ (void)trackUnifyLoadingViewFailureClickRetryIfNeededWithRepository:(id)a0 shouldHiddenRetryButton:(BOOL)a1 createPortraitLimit:(BOOL)a2;
+ (void)trackLoraUnifyLoadingWillBeginWithRepository:(id)a0;
+ (id)generateFakeFailInfoModelForTrackWithRepository:(id)a0 shouldHiddenRetryButton:(BOOL)a1 createPortraitLimit:(BOOL)a2;

@end
