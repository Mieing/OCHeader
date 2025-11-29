@class NSString, MMImageCropperViewController;

@interface WAJSEventHandler_cropImage : WAJSEventHandler_BaseEvent <MMImageCropperDelegate> {
    MMImageCropperViewController *_cropViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
