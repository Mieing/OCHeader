@class AFDSimilarChallengeListDataController, NSString, NSArray;

@interface AFDHorizontalSimilarChallengeSectionViewModel : AWEBaseListSectionViewModel <AFDHorizontalSimilarChallengeViewModelProtocol>

@property (retain, nonatomic) AFDSimilarChallengeListDataController *dataController;
@property (copy, nonatomic) NSString *challengeId;
@property (copy, nonatomic) NSString *challengeName;
@property (copy, nonatomic) NSString *trackGroupId;
@property (copy, nonatomic) NSArray *similarChallenges;
@property (nonatomic) BOOL isFavourite;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
