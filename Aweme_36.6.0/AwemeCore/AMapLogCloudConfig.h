@class NSString, NSMutableDictionary, NSArray;

@interface AMapLogCloudConfig : NSObject

@property (nonatomic) double lifeTimeOfLocalLog;
@property (retain, nonatomic) NSString *ignoreLogFilterStr;
@property (retain, nonatomic) NSMutableDictionary *levelConfigDic;
@property (readonly, nonatomic) NSString *componentName;
@property (readonly, nonatomic) BOOL logEnable;
@property (readonly, nonatomic) BOOL mobileUpload;
@property (readonly, nonatomic) BOOL debugInfoLogWrite;
@property (readonly, nonatomic) BOOL debugInfoLogUpload;
@property (readonly, nonatomic) NSArray *ignoreLogSet;

- (id)cloudConfiWithLogLevel:(id)a0;
- (void)_parseCloudConfig:(id)a0;
- (id)initWithComponentName:(id)a0 cloudConfig:(id)a1;
- (void).cxx_destruct;

@end
