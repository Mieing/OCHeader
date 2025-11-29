@class NSData;

@interface OMJAsyncSpeechQueryResponseInfo : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) long long httpRetCode;
@property (readonly, nonatomic) long long taskID;
@property (readonly, nonatomic) unsigned long long queryIntervalMillis;
@property (readonly, nonatomic) NSData *contextBuff;

- (id)initWithData:(id)a0 isFinished:(BOOL)a1 httpRetCode:(long long)a2 taskID:(long long)a3 queryIntervalMillis:(unsigned long long)a4 contextBuff:(id)a5;
- (void).cxx_destruct;

@end
