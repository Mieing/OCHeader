@class NSString, AWEECMultiMallContainerController;
@protocol IESECMallPopupDelegate;

@interface AWEECPopupDelegateWrapper : NSProxy <IESECMallPopupDelegate>

@property (weak, nonatomic) AWEECMultiMallContainerController *multiMallContainer;
@property (weak, nonatomic) id<IESECMallPopupDelegate> popupDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)currentOutContainerIsVisible;
- (id)currentListContextIdForPopup:(id)a0;
- (id)pageNameForPopup:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
