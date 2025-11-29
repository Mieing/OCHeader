@class NSMutableArray;

@interface BulletStyleConfigResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *fontColorConfigsArray;
@property (readonly, nonatomic) unsigned long long fontColorConfigsArray_Count;
@property (nonatomic) int fansclubLevel;

+ (id)descriptor;

@end
