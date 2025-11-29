@class UIImage, ACCRepositoryWorkspace;
@protocol ACCSequenceEditServiceProtocol;

@interface AWESequencePublishPreviewConfig : NSObject

@property (weak, nonatomic) ACCRepositoryWorkspace *workspace;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> editService;
@property (nonatomic) long long startIndex;
@property (retain, nonatomic) UIImage *previewImage;

- (void).cxx_destruct;

@end
