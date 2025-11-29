@class NSString;

@interface WAMemStatInfo : NSObject

@property (retain, nonatomic) NSString *appID;
@property (nonatomic) unsigned int appVersion;
@property (nonatomic) BOOL isCache;
@property (nonatomic) unsigned int openSeq;
@property (nonatomic) unsigned int lastTimeEnterBg;
@property (nonatomic) long long processMemUsedWhenLaunch;

- (void).cxx_destruct;

@end
