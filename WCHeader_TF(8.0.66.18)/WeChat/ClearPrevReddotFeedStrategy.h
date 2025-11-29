@class NSMutableArray;

@interface ClearPrevReddotFeedStrategy : WXPBGeneratedMessage

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSMutableArray *clearTabType;
@property (retain, nonatomic) NSMutableArray *clearCtrlType;
@property (retain, nonatomic) NSMutableArray *config;

+ (void)initialize;

- (void)setConfig:(id)a0;
- (id)config;
- (void)setClearCtrlType:(id)a0;
- (id)clearCtrlType;
- (void)setClearTabType:(id)a0;
- (id)clearTabType;
- (void)setEnable:(BOOL)a0;
- (BOOL)enable;

@end
