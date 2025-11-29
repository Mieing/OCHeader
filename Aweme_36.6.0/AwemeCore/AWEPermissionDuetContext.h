@class NSString, AWEAwemeModel;

@interface AWEPermissionDuetContext : NSObject <AWEPermissionContext>

@property (nonatomic) unsigned long long entranceType;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) long long sceneType;
@property (nonatomic) unsigned long long downloadType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
