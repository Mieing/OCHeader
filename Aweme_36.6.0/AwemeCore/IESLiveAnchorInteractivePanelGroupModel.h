@class NSString, IESLiveAnchorInteractivePanelGroupSelectorModel;

@interface IESLiveAnchorInteractivePanelGroupModel : IESLiveDynamicModel

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long capacity;
@property (copy, nonatomic) NSString *beforeLiveDesc;
@property (copy, nonatomic) NSString *afterLiveDescLinkURL;
@property (retain, nonatomic) IESLiveAnchorInteractivePanelGroupSelectorModel *selector;

- (void).cxx_destruct;

@end
