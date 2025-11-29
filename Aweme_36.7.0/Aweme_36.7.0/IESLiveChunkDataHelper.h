@class NSMutableData, NSData;

@interface IESLiveChunkDataHelper : NSObject

@property (nonatomic) long long retLength;
@property (retain, nonatomic) NSMutableData *chunkData;
@property (retain, nonatomic) NSData *splitTagData;
@property (retain, nonatomic) NSData *endTagData;

- (id)trimData:(id)a0 withTrimRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)subdata:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)parseChunkDataModel:(id)a0 callBack:(id /* block */)a1;
- (void)chunkCompleteDataModel:(id)a0 callBack:(id /* block */)a1;
- (void)invokeCompletionWithData:(id)a0 error:(id)a1 paramsModel:(id)a2 callBack:(id /* block */)a3;
- (long long)convertDataToInt:(id)a0;
- (id)transforDataFromChunData:(id)a0 withError:(id *)a1;
- (id)deleteSplitWithData:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
