@class NSString;
@protocol WCEditVideoToolListProxyDelegate;

@interface WCEditVideoToolListDelegateProxy : NSObject <UIScrollViewDelegate>

@property (weak, nonatomic) id<WCEditVideoToolListProxyDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
