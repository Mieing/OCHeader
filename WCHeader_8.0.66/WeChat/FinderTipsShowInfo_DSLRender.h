@class FinderTabTipsDSLRenderTmpl;

@interface FinderTipsShowInfo_DSLRender : WXPBGeneratedMessage

@property (retain, nonatomic) FinderTabTipsDSLRenderTmpl *render;
@property (retain, nonatomic) FinderTabTipsDSLRenderTmpl *darkRender;

+ (void)initialize;

- (void)setDarkRender:(id)a0;
- (id)darkRender;
- (void)setRender:(id)a0;
- (id)render;
- (id)currentRenderTmpl;

@end
