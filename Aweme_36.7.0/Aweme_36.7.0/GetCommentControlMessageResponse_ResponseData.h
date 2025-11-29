@class NSMutableArray;

@interface GetCommentControlMessageResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *displayTextArray;
@property (readonly, nonatomic) unsigned long long displayTextArray_Count;

+ (id)descriptor;

@end
