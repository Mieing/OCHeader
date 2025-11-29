@class NSString, VNRecognizedTextObservation;

@interface AWESearchVisionOCRModel : NSObject

@property (copy, nonatomic) NSString *sentenceText;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (nonatomic) float confidence;
@property (retain, nonatomic) VNRecognizedTextObservation *rawData;

- (id)initWithRecognizedTextObservation:(id)a0;
- (void).cxx_destruct;

@end
