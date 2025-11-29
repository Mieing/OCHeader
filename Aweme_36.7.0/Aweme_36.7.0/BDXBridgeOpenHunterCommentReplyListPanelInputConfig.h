@class NSString, NSDictionary, NSArray, BDXBridgeOpenHunterCommentReplyListPanelExpandConfig, NSNumber;

@interface BDXBridgeOpenHunterCommentReplyListPanelInputConfig : BDXBridgeModel

@property (copy, nonatomic) NSString *locateAt;
@property (copy, nonatomic) NSString *imagePreviewMode;
@property (retain, nonatomic) NSNumber *disableFullScreen;
@property (copy, nonatomic) NSString *replyTarget;
@property (copy, nonatomic) NSString *noticeExtraInfo;
@property (copy, nonatomic) NSDictionary *inputTextConfig;
@property (retain, nonatomic) NSArray *elementDisplayConfig;
@property (copy, nonatomic) NSDictionary *albumPickerConfig;
@property (retain, nonatomic) BDXBridgeOpenHunterCommentReplyListPanelExpandConfig *expandConfig;
@property (retain, nonatomic) NSArray *quickEmojis;
@property (copy, nonatomic) NSDictionary *creationConfig;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
