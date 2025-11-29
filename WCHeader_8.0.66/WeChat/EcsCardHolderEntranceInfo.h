@class EcsJumpInfo, NSString;

@interface EcsCardHolderEntranceInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int showType;
@property (retain, nonatomic) EcsJumpInfo *jumpInfo;
@property (nonatomic) BOOL needPreload;
@property (retain, nonatomic) NSString *iconUrl;
@property (nonatomic) unsigned int titleType;

+ (void)initialize;

- (void)setTitleType:(unsigned int)a0;
- (unsigned int)titleType;
- (void)setIconUrl:(id)a0;
- (id)iconUrl;
- (void)setNeedPreload:(BOOL)a0;
- (BOOL)needPreload;
- (void)setJumpInfo:(id)a0;
- (id)jumpInfo;
- (void)setShowType:(unsigned int)a0;
- (unsigned int)showType;

@end
