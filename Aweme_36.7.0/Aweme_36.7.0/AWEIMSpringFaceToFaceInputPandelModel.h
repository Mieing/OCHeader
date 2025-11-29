@class NSString;

@interface AWEIMSpringFaceToFaceInputPandelModel : MTLModel <MTLJSONSerializing, AWEIMFaceToFaceConfigProtocol>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *bgURL;
@property (copy, nonatomic) NSString *smallBgURL;
@property (nonatomic) long long minCount;
@property (copy, nonatomic) NSString *localBgURL;
@property (copy, nonatomic) NSString *localSmallBgURL;
@property (copy, nonatomic) NSString *localBgImagePath;
@property (copy, nonatomic) NSString *localSmallBgImagePath;
@property (copy, nonatomic) NSString *keyboardType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
