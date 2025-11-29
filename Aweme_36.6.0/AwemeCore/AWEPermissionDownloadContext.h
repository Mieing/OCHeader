@class NSString, AWEAwemeModel;

@interface AWEPermissionDownloadContext : NSObject <AWEPermissionContext>

@property (nonatomic) unsigned long long entranceType;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) unsigned long long downloadType;
@property (nonatomic) long long sceneType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
