@class NSString, NSNumber, NSDictionary;

@interface AWEIMXBridgeShareAwemeIMMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *itemId;
@property (retain, nonatomic) NSNumber *chatType;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *chatName;
@property (retain, nonatomic) NSNumber *separateMsg;
@property (retain, nonatomic) NSNumber *enableVideoBtn;
@property (retain, nonatomic) NSNumber *hideQuickEmojiReply;
@property (retain, nonatomic) NSNumber *enableClearBtn;
@property (copy, nonatomic) NSString *defaultContent;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *customToast;
@property (copy, nonatomic) NSDictionary *imExtra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
