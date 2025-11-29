@class NSString;

@interface AWEIMMessageTabCameraComponent : AWEIMComponentBase <AWEIMMessageTabCameraInterface>

@property (nonatomic) BOOL hasAddedObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)p_removeRecordObserver;
- (void)addRecordObserver;
- (void)handleVideoRecordFinishedNty:(id)a0;
- (void)handlePhotoRecordFinishedNty:(id)a0;

@end
