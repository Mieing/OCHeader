@class NSString, NSDictionary, NSArray, NSNumber, BDXBridgeOpenHunterCommentListPanelExpandConfig;

@interface BDXBridgeOpenHunterCommentListPanelInputConfig : BDXBridgeModel

@property (copy, nonatomic) NSString *locateAt;
@property (retain, nonatomic) NSNumber *needForcedShowKeyboard;
@property (copy, nonatomic) NSString *imagePreviewMode;
@property (retain, nonatomic) NSNumber *disableFullScreen;
@property (copy, nonatomic) NSDictionary *inputTextConfig;
@property (retain, nonatomic) NSArray *elementDisplayConfig;
@property (copy, nonatomic) NSDictionary *albumPickerConfig;
@property (retain, nonatomic) BDXBridgeOpenHunterCommentListPanelExpandConfig *expandConfig;
@property (retain, nonatomic) NSArray *defaultImageList;
@property (retain, nonatomic) NSArray *quickEmojis;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
