@class NSDictionary, BDUGLuckyJSONModel;

@interface BDUGLuckyCommonSettingsInfo : BDUGLuckyJSONModel

@property (nonatomic) long long version;
@property (nonatomic) unsigned long long settingsType;
@property (nonatomic) double pollingInterval;
@property (copy, nonatomic) NSDictionary *rawData;
@property (retain, nonatomic) BDUGLuckyJSONModel *dataModel;
@property (nonatomic) BOOL needStoreOnDisk;

- (id)initWithNeedStoreOnDisk:(BOOL)a0 pollingInterval:(long long)a1 settingsType:(unsigned long long)a2 dataModel:(id)a3 rawData:(id)a4 version:(long long)a5;
- (void).cxx_destruct;

@end
