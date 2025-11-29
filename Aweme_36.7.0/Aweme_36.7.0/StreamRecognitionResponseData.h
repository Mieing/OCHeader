@class NSString, NSMutableArray;

@interface StreamRecognitionResponseData : IESLivePBBaseMessage

@property (nonatomic) long long requestId;
@property (copy, nonatomic) NSString *containerSchema;
@property (retain, nonatomic) NSMutableArray *bboxListArray;
@property (readonly, nonatomic) unsigned long long bboxListArray_Count;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
