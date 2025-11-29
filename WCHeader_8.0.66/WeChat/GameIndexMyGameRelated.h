@class GameIndexMyGameRelated_IndexMyGameTextTpl, NSString, GameIndexMyGameRelated_IndexMyGamePicTpl, GameIndexMyGameRelated_IndexMyGameVideoCenterTpl, GameIndexMyGameRelated_VideoRecomTpl;

@interface GameIndexMyGameRelated : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *moduleTitle;
@property (retain, nonatomic) NSString *moduleSubTitle;
@property (nonatomic) unsigned int positionId;
@property (retain, nonatomic) NSString *externInfo;
@property (nonatomic) unsigned int bizType;
@property (nonatomic) unsigned int tplId;
@property (retain, nonatomic) GameIndexMyGameRelated_IndexMyGameTextTpl *tplText;
@property (retain, nonatomic) GameIndexMyGameRelated_IndexMyGamePicTpl *tplPic;
@property (retain, nonatomic) GameIndexMyGameRelated_IndexMyGameVideoCenterTpl *tplVideoCenter;
@property (retain, nonatomic) GameIndexMyGameRelated_VideoRecomTpl *tplVideoRecom;

+ (void)initialize;

@end
