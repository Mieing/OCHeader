@class NSMutableArray;

@interface FinderJoinLiveVisibleInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int showVisibleIdentityFlag;
@property (retain, nonatomic) NSMutableArray *subSwitches;

+ (void)initialize;

- (void)setSubSwitches:(id)a0;
- (id)subSwitches;
- (void)setShowVisibleIdentityFlag:(unsigned int)a0;
- (unsigned int)showVisibleIdentityFlag;

@end
