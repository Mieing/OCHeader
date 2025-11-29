@class NSString, NSMutableArray, WASweeperPublicDataInfo;

@interface WASweeperInfo : NSObject

@property (nonatomic) unsigned long long cacheSize;
@property (copy, nonatomic) id /* block */ cleanBlock;
@property (copy, nonatomic) NSString *nsAppID;
@property (copy, nonatomic) NSString *nsUsrname;
@property (copy, nonatomic) NSString *nsNickName;
@property (nonatomic) unsigned int appServiceType;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned int lastLaunchAppTime;
@property (retain, nonatomic) NSMutableArray *arrFolderPaths;
@property (retain, nonatomic) NSMutableArray *childSweeperInfo;
@property (retain, nonatomic) WASweeperPublicDataInfo *publicDataInfo;

- (void).cxx_destruct;

@end
