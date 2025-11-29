@class NSData, NSDictionary;

@interface OMJAsyncSpeechSynthQueryResponseInfo : NSObject

@property (readonly, nonatomic) NSData *audioData;
@property (readonly, nonatomic) long long audioIndex;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) long long httpRetCode;
@property (readonly, nonatomic) long long taskID;
@property (readonly, nonatomic) NSDictionary *extraInfos;
@property (readonly, nonatomic) unsigned long long queryIntervalMillis;
@property (readonly, nonatomic) NSData *contextBuff;

- (id)initWithAudioData:(id)a0 audioIndex:(long long)a1 isFinished:(BOOL)a2 httpRetCode:(long long)a3 taskID:(long long)a4 extraInfos:(id)a5 queryIntervalMillis:(unsigned long long)a6 contextBuff:(id)a7;
- (void).cxx_destruct;

@end
