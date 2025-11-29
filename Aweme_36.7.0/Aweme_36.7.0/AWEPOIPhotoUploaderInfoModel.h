@class NSString, AWEURLModel;

@interface AWEPOIPhotoUploaderInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *uploaderName;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) AWEURLModel *avatarThumb;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
