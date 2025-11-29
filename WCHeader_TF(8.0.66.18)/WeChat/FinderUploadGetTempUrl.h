@class NSMutableArray;

@interface FinderUploadGetTempUrl : WXPBGeneratedMessage

@property (nonatomic) unsigned int enableNewlife;
@property (nonatomic) unsigned int enableFinder;
@property (nonatomic) unsigned int enableLive;
@property (retain, nonatomic) NSMutableArray *newlifeParam;
@property (retain, nonatomic) NSMutableArray *finderParam;
@property (retain, nonatomic) NSMutableArray *liveParam;

+ (void)initialize;

- (void)setLiveParam:(id)a0;
- (id)liveParam;
- (void)setFinderParam:(id)a0;
- (id)finderParam;
- (void)setNewlifeParam:(id)a0;
- (id)newlifeParam;
- (void)setEnableLive:(unsigned int)a0;
- (unsigned int)enableLive;
- (void)setEnableFinder:(unsigned int)a0;
- (unsigned int)enableFinder;
- (void)setEnableNewlife:(unsigned int)a0;
- (unsigned int)enableNewlife;

@end
