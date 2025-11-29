@class NSString;

@interface ACCRepoCameraInfoModel : NSObject <NSCopying, ACCRepoRegister, ACCRepoCameraInfoData>

@property (nonatomic) long long initialCameraDevicePosition;
@property (nonatomic) unsigned long long initialCameraFlashMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;
+ (long long)repo_scope;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
