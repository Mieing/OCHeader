@class NSMutableArray;

@interface HTSLiveStreamRecognitionContainers : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *recognitionCandidatesArray;
@property (readonly, nonatomic) unsigned long long recognitionCandidatesArray_Count;

+ (id)descriptor;

@end
