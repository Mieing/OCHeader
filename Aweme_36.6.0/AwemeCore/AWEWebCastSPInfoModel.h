@class NSString, AWEURLModel;

@interface AWEWebCastSPInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *imName;
@property (retain, nonatomic) AWEURLModel *imAvatar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imAvatarJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
