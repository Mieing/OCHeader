@class NSString, BDXBridgeSendImEmojiStaticUrl, BDXBridgeSendImEmojiAnimateUrl, NSDictionary, NSNumber;

@interface BDXBridgeSendImEmojiMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *c_short_id;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *display_name;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *static_type;
@property (copy, nonatomic) NSString *animate_type;
@property (retain, nonatomic) NSNumber *sticker_type;
@property (copy, nonatomic) NSString *to_user_id;
@property (retain, nonatomic) NSNumber *conversation_type;
@property (retain, nonatomic) BDXBridgeSendImEmojiStaticUrl *static_url;
@property (retain, nonatomic) BDXBridgeSendImEmojiAnimateUrl *animate_url;
@property (copy, nonatomic) NSDictionary *mob_ext;

+ (id)requiredKeyPaths;
+ (id)static_urlJSONTransformer;
+ (id)animate_urlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
