@class WxaSyncBaseCmd, NSMutableArray;

@interface WxaSyncBlockCgiRequestCmd : WXPBGeneratedMessage

@property (retain, nonatomic) WxaSyncBaseCmd *base;
@property (retain, nonatomic) NSMutableArray *blockCgis;
@property (retain, nonatomic) NSMutableArray *sceneList;
@property (nonatomic) unsigned int blockBeginTime;
@property (nonatomic) unsigned int blockEndTime;

+ (void)initialize;

@end
