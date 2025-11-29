@class HTSLiveCommon, NSMutableArray;

@interface HTSLiveLiveplaysHonorMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) NSMutableArray *honorInfoListArray;
@property (readonly, nonatomic) unsigned long long honorInfoListArray_Count;

+ (id)descriptor;

@end
