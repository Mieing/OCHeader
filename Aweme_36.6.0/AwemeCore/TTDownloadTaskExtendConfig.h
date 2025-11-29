@class NSString;

@interface TTDownloadTaskExtendConfig : JSONModel

@property (copy) NSString *etag;
@property (copy) NSString *lastModifiedTime;
@property (copy) NSString *maxAgeTime;
@property (copy) NSString *startDownloadTime;
@property (copy) NSString *componentId;

+ (BOOL)propertyIsOptional:(id)a0;

- (void)updateConfig:(id)a0 lastModified:(id)a1 etag:(id)a2 startDownloadTime:(id)a3 componentId:(id)a4;
- (void).cxx_destruct;
- (void)dealloc;

@end
