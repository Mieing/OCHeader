@class NSMutableArray, ReddotExposeMoment;

@interface ReddotExposeContext : WXPBGeneratedMessage

@property (retain, nonatomic) ReddotExposeMoment *beginMoment;
@property (retain, nonatomic) ReddotExposeMoment *endMoment;
@property (retain, nonatomic) NSMutableArray *action;

+ (void)initialize;

- (void)setAction:(id)a0;
- (id)action;
- (void)setEndMoment:(id)a0;
- (id)endMoment;
- (void)setBeginMoment:(id)a0;
- (id)beginMoment;

@end
