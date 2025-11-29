@class AWEUILoadingView;

@interface AWERVLongVideoLoadingElement : AWERelatedVideoPlayBaseElement

@property (retain, nonatomic) AWEUILoadingView *longVideoLoadingView;
@property (nonatomic) BOOL isLongVideoLoading;

- (void)initializeElement;
- (void)bindEvent;
- (void)switchLoadingModel:(BOOL)a0;
- (void).cxx_destruct;
- (void)reset;

@end
