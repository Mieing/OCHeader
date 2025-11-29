@class NSString, NSArray, BDXBridgeOpenHunterCommentReplyListPanelInputConfig, BDXBridgeOpenHunterCommentReplyListPanelImagePageConfig, NSNumber, BDXBridgeOpenHunterCommentReplyListPanelAwemePublishConfig;

@interface BDXBridgeOpenHunterCommentReplyListPanelConfigItem : BDXBridgeModel

@property (retain, nonatomic) NSNumber *theme;
@property (retain, nonatomic) NSNumber *needDisplayHeader;
@property (copy, nonatomic) NSString *panelCoreContentConfig;
@property (retain, nonatomic) NSNumber *showInDialog;
@property (retain, nonatomic) NSNumber *showDefaultHeader;
@property (retain, nonatomic) NSArray *longPressPanel;
@property (retain, nonatomic) BDXBridgeOpenHunterCommentReplyListPanelInputConfig *inputConfig;
@property (retain, nonatomic) BDXBridgeOpenHunterCommentReplyListPanelImagePageConfig *imagePageConfig;
@property (retain, nonatomic) BDXBridgeOpenHunterCommentReplyListPanelAwemePublishConfig *awemePublishConfig;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
