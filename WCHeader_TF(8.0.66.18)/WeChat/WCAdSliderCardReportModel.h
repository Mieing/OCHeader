@class NSMutableArray;

@interface WCAdSliderCardReportModel : WCAdChannelReportExtendInfoModel

@property (retain, nonatomic) NSMutableArray *reportItemList;
@property (nonatomic) int sliderCardStyle;
@property (nonatomic) unsigned int slideJumpCount;

- (void).cxx_destruct;

@end
