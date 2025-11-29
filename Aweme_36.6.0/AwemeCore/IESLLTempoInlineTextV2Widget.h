@class IESLLTempoAnimationContext, NSString, IESLLTempoContext, UIView, NSMutableArray;
@protocol IESLLTempoNodeProtocol, IESLLTempoWidgetProtocol;

@interface IESLLTempoInlineTextV2Widget : IESLLTempoBaseWidget <IESLLTempoWidgetProtocol>

@property (copy, nonatomic) NSString *text;
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
- (void)initializeWidget;
- (void)refreshRichTextData;
- (void).cxx_destruct;

@end
