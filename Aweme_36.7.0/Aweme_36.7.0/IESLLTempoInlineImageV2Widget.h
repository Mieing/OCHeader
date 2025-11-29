@class IESLLTempoAnimationContext, NSString, IESLLTempoContext, UIImage, UIView, NSMutableArray;
@protocol IESLLTempoNodeProtocol, IESLLTempoWidgetProtocol;

@interface IESLLTempoInlineImageV2Widget : IESLLTempoBaseWidget <IESLLTempoWidgetProtocol>

@property (retain, nonatomic) UIImage *renderImg;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imgFrame;
@property (weak, nonatomic) id<IESLLTempoNodeProtocol> node;
@property (retain, nonatomic) UIView *renderView;
@property (weak, nonatomic) IESLLTempoContext *context;
@property (weak, nonatomic) id<IESLLTempoWidgetProtocol> parent;
@property (retain, nonatomic) NSMutableArray *children;
@property (retain, nonatomic) IESLLTempoAnimationContext *animationContext;
@property (nonatomic) double timeSincePause;
@property (copy, nonatomic) NSString *animationPlayState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isWithoutUI;
+ (id)tagName;

- (void)layoutDidFinished;
- (void)propsDidUpdate;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initializeWidget;
- (void)loadAttributeSrc;
- (void)loadImageWithURL:(id)a0 placeholderURL:(id)a1;
- (void)refreshRichTextData;
- (void).cxx_destruct;

@end
