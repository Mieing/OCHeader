@class AWEHPChannelEntranceInfoModel, AWEHPChannelBubbleShowInfoModel, AWEHPChannelBadgeShowInfoModel;

@interface AWEHPChannelUIInfoModel : NSObject

@property (retain, nonatomic) AWEHPChannelEntranceInfoModel *entranceInfoModel;
@property (retain, nonatomic) AWEHPChannelBadgeShowInfoModel *showingBadgeModel;
@property (retain, nonatomic) AWEHPChannelBubbleShowInfoModel *showingBubbleModel;

- (void).cxx_destruct;
- (id)description;

@end
