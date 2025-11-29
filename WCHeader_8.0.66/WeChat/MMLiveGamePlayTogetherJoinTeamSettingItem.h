@class NSString;

@interface MMLiveGamePlayTogetherJoinTeamSettingItem : MMLiveGamePlayTogetherOperationItem

@property (retain, nonatomic) NSString *labelText;
@property (nonatomic) unsigned int curJoinTeamMode;
@property (nonatomic) unsigned int curCoinValue;

- (double)heightForCell;
- (void).cxx_destruct;

@end
