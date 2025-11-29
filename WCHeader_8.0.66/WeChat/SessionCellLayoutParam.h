@interface SessionCellLayoutParam : NSObject

@property (nonatomic) double cellHeight;
@property (nonatomic) double headImgLeftMargin;
@property (nonatomic) double headImgTopMargin;
@property (nonatomic) double nameLabelTopMargin;
@property (nonatomic) double nameLabelBottomMargin;
@property (nonatomic) double nameLabelLeftMargin;
@property (nonatomic) double nameLabelHeight;
@property (nonatomic) struct CGSize { double width; double height; } headImgSize;
@property (nonatomic) double statusImgRightMargin;
@property (nonatomic) double timeLabelRightMargin;
@property (nonatomic) double chatNotPushViewRightMargin;

+ (id)layoutParamForCellStyle:(id)a0;
+ (id)layoutParamForCellStyle:(id)a0 expectedHeight:(double)a1;
+ (id)defaultSessionCellLayoutParam;

@end
