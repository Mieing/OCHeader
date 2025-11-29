@class AWEDPlayerInteractionViewConfig, NSString, AWEAwemeModel, AWEDPlayerConfig;

@interface AWEDPlayerPageContext : AWEPageContext <AWEDPlayerPageContextProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) AWEDPlayerConfig *config;
@property (weak, nonatomic) AWEDPlayerInteractionViewConfig *viewConfig;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *originFromPage;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL shouldPreventVideoPause;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)referString;
- (id)enterMethod;
- (id)currentPlayModel;
- (void).cxx_destruct;

@end
