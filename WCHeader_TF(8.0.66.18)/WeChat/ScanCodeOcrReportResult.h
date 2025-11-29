@class NSString;

@interface ScanCodeOcrReportResult : NSObject

@property (retain, nonatomic) NSString *ocrText;
@property (nonatomic) int color;
@property (nonatomic) float colorScore;
@property (nonatomic) int cls;
@property (nonatomic) float clsScore;

- (id)initWithOcrText:(id)a0 color:(int)a1 colorScore:(float)a2 cls:(int)a3 clsScore:(float)a4;
- (void).cxx_destruct;

@end
