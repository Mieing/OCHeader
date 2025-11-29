@class NSString, LynxView;

@interface BDASifDisableSwipe : NSObject <BDXDisableSwipeServiceProtocol>

@property (nonatomic) BOOL enableIntercept;
@property (weak, nonatomic) LynxView *rootView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
