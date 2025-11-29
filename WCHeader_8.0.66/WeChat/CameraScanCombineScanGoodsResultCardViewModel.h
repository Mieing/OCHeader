@class CameraScanGoodsItemViewModel, NSString, UIImage, NSNumber;

@interface CameraScanCombineScanGoodsResultCardViewModel : NSObject

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *reqKey;
@property (retain, nonatomic) NSNumber *trackId;
@property (retain, nonatomic) CameraScanGoodsItemViewModel *originViewModel;
@property (nonatomic) BOOL isFail;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedRect;
@property (nonatomic) unsigned int reportType;

- (id)initWithItemViewModel:(id)a0;
- (void).cxx_destruct;

@end
