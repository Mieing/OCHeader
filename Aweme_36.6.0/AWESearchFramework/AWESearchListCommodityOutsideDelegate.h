@class UIScrollView, NSString;

@interface AWESearchListCommodityOutsideDelegate : NSObject <UIScrollViewDelegate>

@property (weak, nonatomic) UIScrollView *outsideScrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;

@end
