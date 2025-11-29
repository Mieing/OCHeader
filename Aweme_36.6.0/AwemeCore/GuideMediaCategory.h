@class NSString, GuideMedia;

@interface GuideMediaCategory : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) GuideMedia *guideMedia;
@property (nonatomic) BOOL hasGuideMedia;

+ (id)descriptor;

@end
