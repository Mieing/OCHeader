@class NSString, WCEditImageViewController;

@interface WAJSEventHandler_editImage : WAJSEventHandler_BaseEvent <WCEditImageViewControllerDelegate> {
    WCEditImageViewController *_editImageViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
