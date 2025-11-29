@class NSNumber, NSString, NSDictionary;

@interface AWEIMXBridgeSendEncryptedImageMessageMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *relative_path;
@property (retain, nonatomic) NSNumber *need_snack_bar;
@property (retain, nonatomic) NSNumber *snack_bar_bottom_offset;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSDictionary *content;
@property (copy, nonatomic) NSDictionary *log_extra;
@property (copy, nonatomic) NSDictionary *ai_biz_extra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
