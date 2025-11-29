@class NSString;

@interface APCDTOLandingStrategy : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL noLanding;
@property (copy, nonatomic) NSString *scheme;
@property (nonatomic) long long toastTypeAfterPublish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)toastTypeAfterPublishJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
