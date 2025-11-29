@class IESECOrderBottomBarShowConfig;

@interface IESECOrderBottomBarManager : NSObject

@property (nonatomic) double startScrollOffsetY;
@property (retain, nonatomic) IESECOrderBottomBarShowConfig *config;
@property (nonatomic) BOOL shouldShowAfterEndScroll;

- (void)startScrollWithScrollView:(id)a0;
- (BOOL)shouldHideBottomBarAfterScrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndScrollWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
