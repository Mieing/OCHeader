@class HTSLiveImage, NSMutableArray;

@interface HTSLiveChorusStageEffectConfig : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *basicImage;
@property (nonatomic) BOOL hasBasicImage;
@property (retain, nonatomic) NSMutableArray *advanImageListArray;
@property (readonly, nonatomic) unsigned long long advanImageListArray_Count;

+ (id)descriptor;

@end
