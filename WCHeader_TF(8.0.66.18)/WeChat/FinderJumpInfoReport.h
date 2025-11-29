@class NSString, FinderJumpActionInfo, FinderJumpInfo, FinderJumpInfo_Style;

@interface FinderJumpInfoReport : WXPBGeneratedMessage

@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (nonatomic) unsigned int showState;
@property (retain, nonatomic) FinderJumpInfo_Style *style;
@property (retain, nonatomic) NSString *feedid;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) FinderJumpActionInfo *actionInfo;
@property (nonatomic) unsigned int entranceType;

+ (void)initialize;

@end
