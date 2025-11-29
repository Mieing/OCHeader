@class NSString;

@interface AWEFeedAndVideoPlayBottomButtonManager : NSObject <AWEFeedAndVideoPlayBottomButtonManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)trackFeedButtonClickWithModel:(id)a0 businessID:(long long)a1 enterMethod:(id)a2 isTemplateButton:(BOOL)a3 referstring:(id)a4;
- (void)trackFeedButtonShowWithModel:(id)a0 businessID:(long long)a1 isTemplateButton:(BOOL)a2 referstring:(id)a3;
- (BOOL)reverseTokenForBottomButtonInFeedWithReferstring:(id)a0 businessID:(long long)a1 awemeModel:(id)a2;
- (void)trackFeedButtonShowWithModel:(id)a0 businessID:(long long)a1 isTemplateButton:(BOOL)a2 referstring:(id)a3 logExtra:(id)a4;
- (void)trackFeedButtonClickWithModel:(id)a0 businessID:(long long)a1 enterMethod:(id)a2 isTemplateButton:(BOOL)a3 referstring:(id)a4 logExtra:(id)a5;
- (BOOL)reverseTokenForBottomButtonInFeedWithReferstring:(id)a0 btnName:(id)a1 businessID:(long long)a2 awemeModel:(id)a3;
- (BOOL)reverseEnable;
- (BOOL)reverseFromRecommend:(id)a0 businessID:(long long)a1 btnName:(id)a2;
- (id)feedButtonManagerPageList;
- (id)getTemplateButtonABExemptionList;
- (id)getTemplateButtonRecommendExemptionList;
- (id)getReverseBlackList;
- (id)getReverseConfig;
- (id)defaultBlackList;
- (BOOL)recommendReverseUnable;
- (id)btnTrackInfoFromButtonID:(long long)a0;
- (void)trackFeedButtonDislikeClickWithModel:(id)a0 businessID:(long long)a1 enterMethod:(id)a2 isTemplateButton:(BOOL)a3 referstring:(id)a4 logExtra:(id)a5;
- (BOOL)shouldOfflineButtonWithBusinessID:(long long)a0 context:(id)a1;
- (void)trackFeedButtonDislikeClickWithModel:(id)a0 businessID:(long long)a1 enterMethod:(id)a2 isTemplateButton:(BOOL)a3 referstring:(id)a4;
- (BOOL)reverseFromRecommend:(id)a0 businessID:(long long)a1;

@end
