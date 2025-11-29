@class NSString, AWEFeedChannelLeaveModel;

@interface AWEHPLeaveTabTrackModel : NSObject

@property (nonatomic) long long tabType;
@property (copy, nonatomic) NSString *tabID;
@property (retain, nonatomic) AWEFeedChannelLeaveModel *leaveModel;

- (void).cxx_destruct;

@end
