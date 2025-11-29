@class IntelligentClassificationData, IntelligentFaceAlbumData, IntelligentOCRData;

@interface IntelligentMessageResultItem : IntelligentMediaItem

@property (retain, nonatomic) IntelligentClassificationData *classificationData;
@property (retain, nonatomic) IntelligentOCRData *ocrData;
@property (retain, nonatomic) IntelligentFaceAlbumData *faceAlbumData;

- (void).cxx_destruct;

@end
