@class BaseComponent;

@interface TopAreaComponent_TitleSubComponent : IESLivePBBaseMessage

@property (retain, nonatomic) BaseComponent *base;
@property (nonatomic) BOOL hasBase;

+ (id)descriptor;

@end
