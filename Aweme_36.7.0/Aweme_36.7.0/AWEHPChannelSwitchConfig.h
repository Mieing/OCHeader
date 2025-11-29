@class AWEHPChannelReloadTypeDetail, AWEFeedChannelEnterModel, AWEFeedChannelLeaveModel;

@interface AWEHPChannelSwitchConfig : NSObject

@property (nonatomic) long long animateType;
@property (nonatomic) BOOL useDefault;
@property (retain, nonatomic) AWEHPChannelReloadTypeDetail *reloadDetail;
@property (retain, nonatomic) AWEFeedChannelEnterModel *enterModel;
@property (retain, nonatomic) AWEFeedChannelLeaveModel *leaveModel;

- (void).cxx_destruct;

@end
