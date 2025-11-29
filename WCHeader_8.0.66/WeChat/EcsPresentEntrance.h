@class EcsPresentEntrance_EcsEntranceInfo;

@interface EcsPresentEntrance : WXPBGeneratedMessage

@property (retain, nonatomic) EcsPresentEntrance_EcsEntranceInfo *singleEntrance;
@property (retain, nonatomic) EcsPresentEntrance_EcsEntranceInfo *groupEntrance;

+ (void)initialize;

- (void)setGroupEntrance:(id)a0;
- (id)groupEntrance;
- (void)setSingleEntrance:(id)a0;
- (id)singleEntrance;

@end
