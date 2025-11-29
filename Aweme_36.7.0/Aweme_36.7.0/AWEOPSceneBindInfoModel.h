@class NSString;

@interface AWEOPSceneBindInfoModel : MTLModel <MTLJSONSerializing, AWEOpenAuthInfoSceneBindDataProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *scopeString;
@property (nonatomic) unsigned long long limitType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
