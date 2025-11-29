@class NSString;
@protocol AWERightElementLayout;

@interface AWEPlayInteractionRightElementContainer : AWEPlayInteractionElementContainer <AWERightElementContainerProtocol>

@property (retain, nonatomic) id<AWERightElementLayout> layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
