@class NSString, AWEVideoPublishViewModel;

@interface ACCBaseStickerDataProvider : NSObject <ACCStickerDataProvider>

@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)gestureInvalidFrameValue;
- (BOOL)isClipVideoReedit;
- (void).cxx_destruct;

@end
