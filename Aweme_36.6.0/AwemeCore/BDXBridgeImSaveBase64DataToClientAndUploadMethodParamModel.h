@class NSString, NSArray, NSDictionary, NSNumber;

@interface BDXBridgeImSaveBase64DataToClientAndUploadMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *scene;
@property (nonatomic) BOOL needUpload;
@property (copy, nonatomic) NSString *conversationShortId;
@property (retain, nonatomic) NSNumber *petId;
@property (copy, nonatomic) NSString *version;
@property (retain, nonatomic) NSArray *base64data;
@property (retain, nonatomic) NSArray *keys;
@property (copy, nonatomic) NSDictionary *requestParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
