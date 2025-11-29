@class HTSLiveImage;

@interface IESLiveProfileSkin_Skin_BgUIWebp : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *overallImage;
@property (nonatomic) BOOL hasOverallImage;

+ (id)descriptor;

@end
