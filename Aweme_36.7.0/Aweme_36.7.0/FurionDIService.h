@class NSString;
@protocol FurionSettingsDIHelper, FurionAppLogDIHelper, FurionStorageDIHelper;

@interface FurionDIService : HTSService <FurionDIService>

@property (retain, nonatomic) id<FurionAppLogDIHelper> appLogDIHelper;
@property (retain, nonatomic) id<FurionStorageDIHelper> storageDIHelper;
@property (retain, nonatomic) id<FurionSettingsDIHelper> settingsDIHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
