@class NSMutableArray, FinderLiveTagInfo;

@interface FinderLiveModeControlInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int liveMode;
@property (retain, nonatomic) NSMutableArray *fullTagInfo;
@property (retain, nonatomic) FinderLiveTagInfo *lastTagInfo;
@property (nonatomic) unsigned int liveSubModeSwitchFlag;

+ (void)initialize;

@end
