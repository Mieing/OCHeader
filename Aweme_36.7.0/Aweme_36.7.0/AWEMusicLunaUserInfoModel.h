@class NSString;

@interface AWEMusicLunaUserInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isLunaUser;
@property (nonatomic) BOOL isFavorite;
@property (copy, nonatomic) NSString *mappingSongId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
