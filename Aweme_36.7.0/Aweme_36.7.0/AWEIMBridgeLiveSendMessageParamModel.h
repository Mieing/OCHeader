@class NSString, NSNumber, NSDictionary;

@interface AWEIMBridgeLiveSendMessageParamModel : IESLiveBridgeModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *cid;
@property (retain, nonatomic) NSNumber *msgType;
@property (copy, nonatomic) NSDictionary *content;
@property (nonatomic) BOOL needErrorCode;
@property (nonatomic) BOOL needSnackBar;
@property (copy, nonatomic) NSString *ext;
@property (copy, nonatomic) NSString *mobs;
@property (copy, nonatomic) NSString *source;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
