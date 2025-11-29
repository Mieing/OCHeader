@class IESLivePopupItem, NSString;
@protocol UIScrollViewDelegate;

@interface IESLiveScrollViewDelegateProxy : NSObject <UITableViewDelegate, UICollectionViewDelegateFlowLayout>

@property (weak, nonatomic) id<UIScrollViewDelegate> originDelegate;
@property (weak, nonatomic) IESLivePopupItem *popupItem;
@property (nonatomic) long long popupItemType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshDelegate:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end
