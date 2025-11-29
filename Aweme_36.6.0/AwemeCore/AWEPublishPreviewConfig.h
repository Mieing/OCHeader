@class UIImage, ACCRepositoryWorkspace;
@protocol ACCEditServiceProtocol, ACCSequenceEditServiceProtocol;

@interface AWEPublishPreviewConfig : NSObject

@property (weak, nonatomic) ACCRepositoryWorkspace *workspace;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (nonatomic) long long startIndex;
@property (retain, nonatomic) UIImage *previewImage;
@property (nonatomic) BOOL isSequence;
@property (nonatomic) BOOL enableNoteStyleCover;

- (void).cxx_destruct;

@end
