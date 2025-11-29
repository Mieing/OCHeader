@class UIImage, NSString;

@interface ACCTemplateSegmentSelectCellModel : NSObject

@property (nonatomic) BOOL showWaveAnimation;
@property (nonatomic) BOOL showCoverView;
@property (nonatomic) BOOL showTimeLabel;
@property (nonatomic) BOOL showIndicator;
@property (retain, nonatomic) UIImage *coverImage;
@property (nonatomic) double coverCornerRadius;
@property (copy, nonatomic) NSString *timeLabelString;

- (void).cxx_destruct;

@end
