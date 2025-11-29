@class FinderJumpInfo;

@interface CardHolderEntranceInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int showType;
@property (retain, nonatomic) FinderJumpInfo *newEntranceJumpInfo;
@property (nonatomic) BOOL needPreload;

+ (void)initialize;

- (void)setNeedPreload:(BOOL)a0;
- (BOOL)needPreload;
- (void)setNewEntranceJumpInfo:(id)a0;
- (id)newEntranceJumpInfo;
- (void)setShowType:(unsigned int)a0;
- (unsigned int)showType;

@end
