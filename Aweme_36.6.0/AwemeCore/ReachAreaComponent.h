@class BaseComponent;

@interface ReachAreaComponent : IESLivePBBaseMessage

@property (retain, nonatomic) BaseComponent *base;
@property (nonatomic) BOOL hasBase;

+ (id)descriptor;

@end
