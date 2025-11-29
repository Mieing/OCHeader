@class NSString;

@interface FinderLiveWxaPreloadCtrlInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (nonatomic) BOOL preHot;
@property (retain, nonatomic) NSString *preHotPath;
@property (nonatomic) BOOL preDownload;
@property (nonatomic) BOOL preLoad;
@property (nonatomic) unsigned int showNavigationBar;

+ (void)initialize;

- (void)setShowNavigationBar:(unsigned int)a0;
- (unsigned int)showNavigationBar;
- (void)setPreLoad:(BOOL)a0;
- (BOOL)preLoad;
- (void)setPreDownload:(BOOL)a0;
- (BOOL)preDownload;
- (void)setPreHotPath:(id)a0;
- (id)preHotPath;
- (void)setPreHot:(BOOL)a0;
- (BOOL)preHot;
- (void)setAppid:(id)a0;
- (id)appid;

@end
