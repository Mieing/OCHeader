@class NSArray, BDXBridgeOpenHunterCommentListPanelImagePageConfig, BDXBridgeOpenHunterCommentListPanelCommentListConfig, BDXBridgeOpenHunterCommentListPanelInputConfig, NSNumber;

@interface BDXBridgeOpenHunterCommentListPanelConfigItem : BDXBridgeModel

@property (retain, nonatomic) NSNumber *theme;
@property (retain, nonatomic) BDXBridgeOpenHunterCommentListPanelCommentListConfig *commentListConfig;
@property (retain, nonatomic) NSArray *longPressPanel;
@property (retain, nonatomic) BDXBridgeOpenHunterCommentListPanelInputConfig *inputConfig;
@property (retain, nonatomic) BDXBridgeOpenHunterCommentListPanelImagePageConfig *imagePageConfig;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
