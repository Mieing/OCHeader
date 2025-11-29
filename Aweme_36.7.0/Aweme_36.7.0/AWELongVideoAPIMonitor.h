@class NSString;

@interface AWELongVideoAPIMonitor : NSObject <AWELandscapeLVAPIMonitorProtocol>

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *fromPage;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) NSString *channelID;
@property (copy, nonatomic) NSString *pageID;
@property (copy, nonatomic) NSString *filterPageID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getVideoInfoStatus:(id)a0;
+ (id)sharedInstance;

- (void)longVideoApiMonitorWithApiType:(long long)a0 isSuccess:(long long)a1 error:(id)a2 duration:(long long)a3 dataError:(id)a4 extParams:(id)a5;
- (void).cxx_destruct;

@end
