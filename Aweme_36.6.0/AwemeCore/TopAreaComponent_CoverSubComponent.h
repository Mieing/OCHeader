@class BaseComponent;

@interface TopAreaComponent_CoverSubComponent : IESLivePBBaseMessage

@property (retain, nonatomic) BaseComponent *base;
@property (nonatomic) BOOL hasBase;

+ (id)descriptor;

@end
