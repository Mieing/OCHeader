@class NSMutableArray, NSMutableSet;

@interface IESLiveMultiLinkerRandomTeamLayoutModel : NSObject

@property (nonatomic) BOOL needMockOppositeUser;
@property (retain, nonatomic) NSMutableArray *oppositeTeamLinkmicIdArray;
@property (retain, nonatomic) NSMutableArray *localSortedLinkmicIds;
@property (retain, nonatomic) NSMutableSet *ownTeamUserIds;

- (void).cxx_destruct;

@end
