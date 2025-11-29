@class IntelligentClassificationData, NSArray, IntelligentOCRData;

@interface IntelligentMessageTemporaryItem : MMObject

@property (nonatomic) BOOL isHadOCRData;
@property (retain, nonatomic) IntelligentOCRData *ocrData;
@property (nonatomic) BOOL isHadClassificationData;
@property (retain, nonatomic) IntelligentClassificationData *classificationData;
@property (nonatomic) BOOL isHadFaceAlbumData;
@property (retain, nonatomic) NSArray *arrFaceAlbumData;

- (void).cxx_destruct;

@end
