@class NSString;
@protocol UICollectionViewDelegate;

@interface AWEStickCollectionViewDelegateForwarder : NSObject <UICollectionViewDelegate> {
    double _scrollOffsetY;
    BOOL _didScrollFlag;
}

@property (weak, nonatomic) id<UICollectionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)forwardInvocation:(id)a0;

@end
