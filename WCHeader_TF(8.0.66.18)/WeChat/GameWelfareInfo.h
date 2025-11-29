@class GameWelfareMediaInfo, NSString, GameWelfareJumpInfo, NSMutableArray;

@interface GameWelfareInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int welfareType;
@property (nonatomic) unsigned int welfareStatus;
@property (nonatomic) unsigned long long serverTs;
@property (retain, nonatomic) GameWelfareJumpInfo *welfareJumpInfo;
@property (retain, nonatomic) GameWelfareMediaInfo *welfareMediaInfo;
@property (retain, nonatomic) NSMutableArray *welfareTaskList;
@property (retain, nonatomic) NSString *welfareId;

+ (void)initialize;

@end
