@class ACCRecordCaptionListPlaceHolderViewConfig, UIColor, ACCRecordCaptionListCellUIConfig;
@protocol ACCRecordCaptionListDataSource, ACCRecordCaptionListTimeSynchronizer;

@interface ACCRecordCaptionListConfig : NSObject

@property (retain, nonatomic) ACCRecordCaptionListCellUIConfig *plainTextCellUIConfig;
@property (retain, nonatomic) ACCRecordCaptionListCellUIConfig *captionCellUIConfig;
@property (nonatomic) double lineSpacing;
@property (retain, nonatomic) ACCRecordCaptionListPlaceHolderViewConfig *placeHolderViewConfig;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (weak, nonatomic) id<ACCRecordCaptionListDataSource> dataSource;
@property (weak, nonatomic) id<ACCRecordCaptionListTimeSynchronizer> timeSynchronizer;
@property (nonatomic) BOOL needMask;
@property (nonatomic) double maskHeight;

- (void).cxx_destruct;

@end
