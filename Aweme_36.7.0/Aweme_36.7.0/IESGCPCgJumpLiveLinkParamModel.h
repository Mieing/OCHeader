@class NSString, NSNumber;

@interface IESGCPCgJumpLiveLinkParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) NSNumber *platform;
@property (copy, nonatomic) NSString *miniId;
@property (copy, nonatomic) NSString *miniPath;
@property (copy, nonatomic) NSString *webUrl;
@property (retain, nonatomic) NSNumber *miniType;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSNumber *accessType;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
