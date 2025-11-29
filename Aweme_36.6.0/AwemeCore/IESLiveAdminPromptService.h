@class NSString;

@interface IESLiveAdminPromptService : NSObject <IESLiveAdminPromptService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enablePrompt;
+ (BOOL)isPromptManager:(id)a0;
+ (BOOL)isFangzhouMananger:(id)a0;
+ (id)aboutPromptBaseWebUrlString;


@end
