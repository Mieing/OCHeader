@class NSMutableArray;

@interface IESLiveAioLinkStartASREngineRequest : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *hotWordsListArray;
@property (readonly, nonatomic) unsigned long long hotWordsListArray_Count;

+ (id)descriptor;

@end
