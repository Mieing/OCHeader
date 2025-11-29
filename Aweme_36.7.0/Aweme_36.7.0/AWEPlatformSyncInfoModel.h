@class NSString;

@interface AWEPlatformSyncInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *platformName;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) BOOL fullSynced;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
