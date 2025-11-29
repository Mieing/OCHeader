@class BaseComponent, HTSLiveText;

@interface BottomToolBarComponent : IESLivePBBaseMessage

@property (retain, nonatomic) BaseComponent *base;
@property (nonatomic) BOOL hasBase;
@property (retain, nonatomic) HTSLiveText *fullCreatePageDesc;
@property (nonatomic) BOOL hasFullCreatePageDesc;

+ (id)descriptor;

@end
