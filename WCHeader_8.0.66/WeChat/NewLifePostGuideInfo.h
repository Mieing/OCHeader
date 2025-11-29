@class NSString, NewLifePostGuideJumpInfo, NSMutableArray;

@interface NewLifePostGuideInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *headImgUrl;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *guideText;
@property (retain, nonatomic) NewLifePostGuideJumpInfo *jumpInfo;
@property (retain, nonatomic) NSString *reportInfoStr;
@property (retain, nonatomic) NSMutableArray *tagList;

+ (void)initialize;

@end
