@class IESIMMdTableCollectionViewRenderContext;
@protocol IESIMMdTableCollectionViewDelegate;

@interface IESIMMdTableCollectionViewProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) IESIMMdTableCollectionViewRenderContext *renderContext;
@property (weak, nonatomic) id<IESIMMdTableCollectionViewDelegate> delegate;

- (void).cxx_destruct;

@end
