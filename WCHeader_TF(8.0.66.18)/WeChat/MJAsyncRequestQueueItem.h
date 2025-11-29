@class NSString, NSArray, MJSpeechAudioData;

@interface MJAsyncRequestQueueItem : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *roleID;
@property (readonly, nonatomic) NSString *audioID;
@property (readonly, nonatomic) MJSpeechAudioData *audioData;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSArray *captionItems;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } audioDuration;
@property (readonly, nonatomic) BOOL isCloneTimbre;
@property (readonly, nonatomic) id /* block */ stsCompletionHandler;
@property (readonly, nonatomic) id /* block */ ttsCompletionHandler;
@property (readonly, nonatomic) id /* block */ ttsGroupCompletionHandler;
@property (readonly, nonatomic) id /* block */ sttGroupCompletionHandler;
@property (readonly, nonatomic) id /* block */ speechCloneGroupCompletionHandler;

+ (id)stsItemWithAudioID:(id)a0 roleID:(id)a1 audioData:(id)a2 completionHandler:(id /* block */)a3;
+ (id)ttsItemWithText:(id)a0 roleID:(id)a1 isCloneTimbre:(BOOL)a2 completionHandler:(id /* block */)a3;
+ (id)ttsGroupItemWithAudioID:(id)a0 roleID:(id)a1 isCloneTimbre:(BOOL)a2 captionItems:(id)a3 audioDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 completionHandler:(id /* block */)a5;
+ (id)sttGroupItemWithAudioID:(id)a0 audioData:(id)a1 completionHandler:(id /* block */)a2;
+ (id)speechCloneGroupItemWithAudioID:(id)a0 audioData:(id)a1 text:(id)a2 completionHandler:(id /* block */)a3;

- (id)initWithType:(unsigned long long)a0 roleID:(id)a1 audioID:(id)a2 audioData:(id)a3 text:(id)a4 captionItems:(id)a5 audioDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a6 isCloneTimbre:(BOOL)a7 stsCompletionHandler:(id /* block */)a8 ttsCompletionHandler:(id /* block */)a9 ttsGroupCompletionHandler:(id /* block */)a10 sttGroupCompletionHandler:(id /* block */)a11 speechCloneGroupCompletionHandler:(id /* block */)a12;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
