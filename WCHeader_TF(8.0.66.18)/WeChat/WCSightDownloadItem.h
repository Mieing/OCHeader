@interface WCSightDownloadItem : MMObject

@property (nonatomic) unsigned long long startTime;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) unsigned int scene;

+ (id)itemWithStartTime:(unsigned long long)a0 isPreload:(BOOL)a1 scene:(unsigned int)a2;

@end
