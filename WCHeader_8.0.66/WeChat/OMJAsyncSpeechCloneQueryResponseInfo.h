@class NSString, NSDictionary, NSData;

@interface OMJAsyncSpeechCloneQueryResponseInfo : NSObject

@property (readonly, nonatomic) NSString *roleID;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) long long httpRetCode;
@property (readonly, nonatomic) long long taskID;
@property (readonly, nonatomic) NSDictionary *extraInfos;
@property (readonly, nonatomic) unsigned long long queryIntervalMillis;
@property (readonly, nonatomic) NSData *contextBuff;

- (id)initWithRoleID:(id)a0 isFinished:(BOOL)a1 httpRetCode:(long long)a2 taskID:(long long)a3 extraInfos:(id)a4 queryIntervalMillis:(unsigned long long)a5 contextBuff:(id)a6;
- (void).cxx_destruct;

@end
