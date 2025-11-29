@class NSString;
@protocol MMFinderLiveConnectMicPkPanelCellDelegate;

@interface MMFinderLiveConnectMicPkPanelInviteAudienceCell : MMFinderLiveConnectMicInviteAudienceCellView <MMFinderLiveConnectMicPkPanelCellBase>

@property (weak, nonatomic) id<MMFinderLiveConnectMicPkPanelCellDelegate> cellDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;

- (void)configSubTitleLabel;
- (void).cxx_destruct;

@end
