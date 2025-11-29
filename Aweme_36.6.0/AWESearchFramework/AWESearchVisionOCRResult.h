@class NSArray;

@interface AWESearchVisionOCRResult : NSObject

@property (copy, nonatomic) NSArray *models;
@property (copy, nonatomic) NSArray *rawDatas;
@property (copy, nonatomic) NSArray *bboxInfos;
@property (nonatomic) double costTime;

+ (id)OCRInfoFromModel:(id)a0;
+ (id)bboxFromCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void)buildDataFromObservations:(id)a0;
- (id)initWithRecognizedTextObservations:(id)a0;
- (void).cxx_destruct;

@end
