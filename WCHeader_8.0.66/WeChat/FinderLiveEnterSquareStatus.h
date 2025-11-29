@class NSData, FinderLbsTabTipsInfo;

@interface FinderLiveEnterSquareStatus : WXPBGeneratedMessage

@property (nonatomic) int scene;
@property (nonatomic) unsigned int loadingTimeMs;
@property (nonatomic) unsigned int enterType;
@property (nonatomic) unsigned int fakeLoadingTimeMs;
@property (nonatomic) unsigned int enterReddotType;
@property (nonatomic) unsigned int fromClickLoadingTimeMs;
@property (nonatomic) unsigned int enterScene;
@property (nonatomic) unsigned long long eventTime;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) FinderLbsTabTipsInfo *lbsTabTipsInfo;

+ (void)initialize;

@end
