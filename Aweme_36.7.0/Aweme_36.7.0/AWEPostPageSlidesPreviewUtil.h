@protocol ACCSequenceEditServiceProtocol;

@interface AWEPostPageSlidesPreviewUtil : AWEPostPagePreviewUtilHandler

@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;

- (void)bindServices:(id)a0;
- (void)configCoverImage;
- (id)configPreviewControllerWithImage:(id)a0 index:(double)a1 editService:(id)a2;
- (void).cxx_destruct;

@end
