@class NSString, WCFinderRedPacketVideoEditCropRectModel, WCFinderRedPacketCropSliderTimeRange;

@interface WCFinderRedPacketVideoEditResponseParams : NSObject

@property (copy, nonatomic) NSString *thumbPath;
@property (retain, nonatomic) WCFinderRedPacketVideoEditCropRectModel *cropRectModel;
@property (retain, nonatomic) WCFinderRedPacketCropSliderTimeRange *timeRangeModel;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
