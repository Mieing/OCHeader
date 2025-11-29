@class NSString;
@protocol ACCEditPreviewProtocol;

@interface ACCCaptionPreviewServiceImpl : NSObject <ACCCaptionPreviewServiceProtocol>

@property (weak, nonatomic) id<ACCEditPreviewProtocol> previewService;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setStickerEditMode:(BOOL)a0;
- (void)resetPlayerWithViews:(id)a0;
- (void)seekToTime:(double)a0 seekMode:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)play;
- (void)pause;

@end
