@class NSArray, HTSLivePKApi, NSNumber, VoteSetting;

@interface IESLiveRevenueInteractVoteThemeViewModel : NSObject

@property (retain, nonatomic) HTSLivePKApi *api;
@property (retain, nonatomic) NSNumber *selectedDuration;
@property (retain, nonatomic) VoteSetting *selectedVote;
@property (copy, nonatomic) NSArray *durationArray;
@property (copy, nonatomic) NSArray *voteArray;

- (id)initWithDIContext:(id)a0;
- (void)trackWithEvent:(id)a0 extraParams:(id)a1;
- (BOOL)isDoubleInteract;
- (void)beginVote;
- (void)fetchVoteList;
- (void)resortVoteArray;
- (id)defaultDurationArray;
- (void)beginVoteInLink:(id)a0;
- (void)beginVoteInPK:(id)a0;
- (void).cxx_destruct;

@end
