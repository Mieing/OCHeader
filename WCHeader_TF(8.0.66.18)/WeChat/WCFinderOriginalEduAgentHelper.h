@class NSString, WCFinderFeedContentVM, MMUIViewController;

@interface WCFinderOriginalEduAgentHelper : NSObject <WCFinderOriginalEduActionSheetDelegate>

@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (nonatomic) unsigned long long type;
@property (weak, nonatomic) MMUIViewController *fromVC;
@property (nonatomic) unsigned long long sourcePageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)originalEduClickRuleAction:(id)a0;
- (void)originalEduClickAcceptAction:(id)a0;
- (void)originalEduClickRewardEdu;
- (void)originalEduClickHelpEdu;
- (void)interestsGuideClickEdu;
- (void).cxx_destruct;

@end
