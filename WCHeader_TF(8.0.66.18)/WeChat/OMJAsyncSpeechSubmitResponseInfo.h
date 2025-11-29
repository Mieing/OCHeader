@class NSString, NSData;

@interface OMJAsyncSpeechSubmitResponseInfo : NSObject

@property (readonly, nonatomic) NSString *submitTaskID;
@property (readonly, nonatomic) long long taskID;
@property (readonly, nonatomic) unsigned long long queryIntervalMillis;
@property (readonly, nonatomic) NSData *contextBuff;

- (id)initWithSubmitTaskID:(id)a0 taskID:(long long)a1 queryIntervalMillis:(unsigned long long)a2 contextBuff:(id)a3;
- (void).cxx_destruct;

@end
