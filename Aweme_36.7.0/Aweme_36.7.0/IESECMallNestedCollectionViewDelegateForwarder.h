@class NSString;
@protocol UICollectionViewDelegate;

@interface IESECMallNestedCollectionViewDelegateForwarder : NSObject <UICollectionViewDelegate>

@property (weak, nonatomic) id<UICollectionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
