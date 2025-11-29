@class BaseComponent;

@interface TopAreaComponent_LocationSubComponent : IESLivePBBaseMessage

@property (retain, nonatomic) BaseComponent *base;
@property (nonatomic) BOOL hasBase;

+ (id)descriptor;

@end
