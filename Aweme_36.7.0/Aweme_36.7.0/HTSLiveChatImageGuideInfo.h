@class NSMutableArray;

@interface HTSLiveChatImageGuideInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *imagesArray;
@property (readonly, nonatomic) unsigned long long imagesArray_Count;

+ (id)descriptor;

@end
