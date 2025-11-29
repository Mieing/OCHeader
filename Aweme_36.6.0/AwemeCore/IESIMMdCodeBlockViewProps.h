@class IESIMMdCodeBlockViewRenderContext;
@protocol IESIMMdCodeBlockViewDelegate;

@interface IESIMMdCodeBlockViewProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) IESIMMdCodeBlockViewRenderContext *renderContext;
@property (weak, nonatomic) id<IESIMMdCodeBlockViewDelegate> delegate;

- (void).cxx_destruct;

@end
