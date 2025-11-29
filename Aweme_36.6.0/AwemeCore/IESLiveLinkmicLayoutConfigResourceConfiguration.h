@class NSString;

@interface IESLiveLinkmicLayoutConfigResourceConfiguration : NSObject

@property (copy, nonatomic) NSString *entranceFileName;
@property (copy, nonatomic) id /* block */ configFileFinder;
@property (copy, nonatomic) NSString *fileName;
@property (nonatomic) BOOL needFetchOffsetConfig;
@property (copy, nonatomic) NSString *offsetEntranceFileName;
@property (copy, nonatomic) id /* block */ offsetConfigFileFinder;
@property (copy, nonatomic) NSString *offsetFileName;
@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSString *geckoChannel;
@property (copy, nonatomic) NSString *geckoAccessKey;
@property (readonly, copy, nonatomic) NSString *cdnPath;
@property (copy, nonatomic) NSString *localBundlePath;
@property (nonatomic) BOOL forceUseLocalConfig;

- (void).cxx_destruct;
- (id)description;

@end
