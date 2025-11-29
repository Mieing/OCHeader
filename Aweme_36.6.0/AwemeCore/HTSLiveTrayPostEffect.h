@class HTSLiveText, NSString, NSMutableDictionary, HTSLiveImage;

@interface HTSLiveTrayPostEffect : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *postEffectImg;
@property (nonatomic) BOOL hasPostEffectImg;
@property (copy, nonatomic) NSString *postSchema;
@property (nonatomic) long long postDuration;
@property (nonatomic) int postEffectSource;
@property (retain, nonatomic) HTSLiveText *subTitle;
@property (nonatomic) BOOL hasSubTitle;
@property (nonatomic) int showType;
@property (retain, nonatomic) NSMutableDictionary *eventTracking;
@property (readonly, nonatomic) unsigned long long eventTracking_Count;

+ (id)descriptor;

@end
