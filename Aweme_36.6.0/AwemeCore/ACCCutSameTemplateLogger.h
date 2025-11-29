@class NSString;

@interface ACCCutSameTemplateLogger : NSObject <VideoTemplateLoggerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)logger:(id)a0 log:(id)a1 level:(long long)a2 file:(id)a3 function:(id)a4 line:(int)a5 message:(id)a6;

@end
