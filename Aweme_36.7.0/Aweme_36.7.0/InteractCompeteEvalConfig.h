@class GPBStringInt64Dictionary, GPBInt64Int64Dictionary, NSMutableArray;

@interface InteractCompeteEvalConfig : IESLivePBBaseMessage

@property (retain, nonatomic) GPBInt64Int64Dictionary *likeToScore;
@property (readonly, nonatomic) unsigned long long likeToScore_Count;
@property (retain, nonatomic) NSMutableArray *giftEvalListArray;
@property (readonly, nonatomic) unsigned long long giftEvalListArray_Count;
@property (retain, nonatomic) GPBStringInt64Dictionary *commentToScore;
@property (readonly, nonatomic) unsigned long long commentToScore_Count;

+ (id)descriptor;

@end
