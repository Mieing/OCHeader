@class NSMutableArray;

@interface HTSLiveEventParamInfoList : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *paramInfosArray;
@property (readonly, nonatomic) unsigned long long paramInfosArray_Count;

+ (id)descriptor;

@end
