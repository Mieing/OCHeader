@class NSMutableArray;

@interface HTSLiveAudienceMsgOptPanel : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *itemListArray;
@property (readonly, nonatomic) unsigned long long itemListArray_Count;

+ (id)descriptor;

@end
