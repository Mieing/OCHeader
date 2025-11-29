@class BDXBridgeOpenHunterCommentInputPanelExpandConfig, NSString, NSDictionary, NSArray, NSNumber;

@interface BDXBridgeOpenHunterCommentInputPanelInputConfig : BDXBridgeModel

@property (retain, nonatomic) NSNumber *showInDialog;
@property (copy, nonatomic) NSString *locateAt;
@property (copy, nonatomic) NSString *imagePreviewMode;
@property (retain, nonatomic) NSNumber *disableFullScreen;
@property (retain, nonatomic) NSNumber *theme;
@property (copy, nonatomic) NSDictionary *inputTextConfig;
@property (retain, nonatomic) NSArray *elementDisplayConfig;
@property (copy, nonatomic) NSDictionary *albumPickerConfig;
@property (retain, nonatomic) BDXBridgeOpenHunterCommentInputPanelExpandConfig *expandConfig;
@property (retain, nonatomic) NSArray *quickEmojis;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
