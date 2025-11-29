@class NSString;
@protocol MMFinderLiveConnectMicPkPanelCellDelegate;

@interface MMFinderLiveConnectMicPkPanelAudienceCell : MMFinderLiveConnectedMicAudienceCellView <MMFinderLiveConnectMicPkPanelCellBase>

@property (weak, nonatomic) id<MMFinderLiveConnectMicPkPanelCellDelegate> cellDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;
+ (double)applicantCellHeight;

- (void)configSubTitleLabel;
- (void).cxx_destruct;

@end
