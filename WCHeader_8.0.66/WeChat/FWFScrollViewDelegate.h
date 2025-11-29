@class NSString, FWFScrollViewDelegateFlutterApiImpl;

@interface FWFScrollViewDelegate : FWFObject <UIScrollViewDelegate>

@property (readonly, nonatomic) FWFScrollViewDelegateFlutterApiImpl *scrollViewDelegateAPI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBinaryMessenger:(id)a0 instanceManager:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
