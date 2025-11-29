@class NSString;

@interface AWEMayDayBridgeDirectMessageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *picUrl;
@property (copy, nonatomic) NSString *webUrl;
@property (copy, nonatomic) NSString *uiExtra;
@property (copy, nonatomic) NSString *aweType;
@property (copy, nonatomic) NSString *msgTrack;
@property (copy, nonatomic) NSString *hint;
@property (copy, nonatomic) NSString *bgUrl;
@property (copy, nonatomic) NSString *webUrlV2;
@property (copy, nonatomic) NSString *webUrlV2Version;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
