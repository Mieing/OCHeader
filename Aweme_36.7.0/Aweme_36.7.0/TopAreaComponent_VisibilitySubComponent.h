@class BaseComponent;

@interface TopAreaComponent_VisibilitySubComponent : IESLivePBBaseMessage

@property (retain, nonatomic) BaseComponent *base;
@property (nonatomic) BOOL hasBase;

+ (id)descriptor;

@end
