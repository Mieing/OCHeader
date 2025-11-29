@class NSString;
@protocol MMFinderLiveConnectMicPkPanelCellDelegate;

@interface MMFinderLiveConnectMicPkPanelAnchorCell : MMFinderLiveConnectedMicAnchorCellView <MMFinderLiveConnectMicPkPanelCellBase>

@property (weak, nonatomic) id<MMFinderLiveConnectMicPkPanelCellDelegate> cellDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;

- (void).cxx_destruct;

@end
