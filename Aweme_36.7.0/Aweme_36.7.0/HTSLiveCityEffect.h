@class NSString, HTSLiveImage, NSMutableArray;

@interface HTSLiveCityEffect : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *effectResource;
@property (nonatomic) BOOL hasEffectResource;
@property (copy, nonatomic) NSString *city;
@property (retain, nonatomic) NSMutableArray *showEffectUserIdListArray;
@property (readonly, nonatomic) unsigned long long showEffectUserIdListArray_Count;

+ (id)descriptor;

@end
