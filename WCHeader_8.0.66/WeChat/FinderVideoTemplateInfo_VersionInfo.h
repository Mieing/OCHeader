@class NSString;

@interface FinderVideoTemplateInfo_VersionInfo : WXPBGeneratedMessage <YYModel>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned int iosSdkVersionMin;
@property (nonatomic) unsigned int iosSdkVersionMax;
@property (nonatomic) unsigned int androidSdkVersionMin;
@property (nonatomic) unsigned int androidSdkVersionMax;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (void)initialize;


@end
