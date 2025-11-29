@class NSNumber, NSString;

@interface BDXBridgeOpenHunterCommentListPanelCommentListConfig : BDXBridgeModel

@property (retain, nonatomic) NSNumber *fullScreenBtnEnabled;
@property (copy, nonatomic) NSString *replyTarget;
@property (copy, nonatomic) NSString *coreContentConfig;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
