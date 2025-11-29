@class NSString, UIViewController, NSArray;

@interface AWEOPSceneAuthInfoModel : MTLModel <MTLJSONSerializing, AWEOpenAuthInfoSceneFlowDataProtocol>

@property (copy, nonatomic) NSString *authID;
@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (weak, nonatomic) UIViewController *targetViewController;
@property (copy, nonatomic) NSString *openExtraStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *scopesArray;
@property (nonatomic) BOOL passCert;
@property (copy, nonatomic) NSString *schemaOrNativeKey;
@property (copy, nonatomic) NSString *containerType;
@property (nonatomic) unsigned long long certType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
