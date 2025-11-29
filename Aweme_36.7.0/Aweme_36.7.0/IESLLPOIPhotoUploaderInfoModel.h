@class NSString, IESLLifeURLModel;

@interface IESLLPOIPhotoUploaderInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *uploaderName;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) IESLLifeURLModel *avatarThumb;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
