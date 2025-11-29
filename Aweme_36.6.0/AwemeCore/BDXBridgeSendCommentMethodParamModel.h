@class NSString;

@interface BDXBridgeSendCommentMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *aweme_id;
@property (copy, nonatomic) NSString *comment_text;
@property (copy, nonatomic) NSString *sticker;
@property (copy, nonatomic) NSString *enter_from;
@property (retain, nonatomic) id track_params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
