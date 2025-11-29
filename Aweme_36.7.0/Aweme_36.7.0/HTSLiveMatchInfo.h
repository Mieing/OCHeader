@class HTSLiveMatchSkinInfo;

@interface HTSLiveMatchInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveMatchSkinInfo *skin;
@property (nonatomic) BOOL hasSkin;

+ (id)descriptor;

@end
