@class NSMutableArray;

@interface IESLiveMultiBattlePrepareUsersViewConfig : NSObject

@property (retain, nonatomic) NSMutableArray *oppositeTeamUsers;
@property (nonatomic) BOOL disableGenderDisplay;

- (long long)multiBattlePrepareViewDisplayCount;
- (id)p_getLinkerModelWithUser:(id)a0 showSelected:(BOOL)a1 alignPosition:(unsigned long long)a2 showChangeBtn:(BOOL)a3;
- (id)setupPersonalLinkers:(id)a0;
- (id)setupTeamLinkers:(id)a0 modeInfo:(id)a1 isSelfLayoutLast:(BOOL)a2 isSelfTeamLayoutRight:(BOOL)a3;
- (void).cxx_destruct;

@end
