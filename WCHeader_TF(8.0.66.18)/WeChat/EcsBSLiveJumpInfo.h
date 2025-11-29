@class EcsBSLiveInfo, NSMutableArray;

@interface EcsBSLiveJumpInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) EcsBSLiveInfo *targetLiveInfo;
@property (retain, nonatomic) NSMutableArray *liveInfoList;

+ (void)initialize;

@end
