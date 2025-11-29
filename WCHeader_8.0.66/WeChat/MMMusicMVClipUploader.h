@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, MMMusicMVClipUploaderDelegate;

@interface MMMusicMVClipUploader : NSObject <WCFinderPostDataItemExt> {
    NSMutableDictionary *_dictUploadingClip;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (weak) id<MMMusicMVClipUploaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)uploadClipItem:(id)a0;
- (void)fillMoreVideoInformationFrom:(id)a0 toFinderDataItem:(id)a1;
- (void)onFinderPostSessionUpLoadSuccessful:(id)a0;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)a0 errorType:(long long)a1;
- (void).cxx_destruct;

@end
