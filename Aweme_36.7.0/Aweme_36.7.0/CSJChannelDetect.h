@class NSDictionary;

@interface CSJChannelDetect : NSObject

@property (copy) NSDictionary *collectRitDic;

+ (id)sharedInstance;

- (BOOL)isDemoApp;
- (id)getClassName:(id)a0;
- (BOOL)canCollect;
- (BOOL)alreadyCollect:(id)a0;
- (id)getProtocolList:(id)a0;
- (id)getIvarList:(id)a0;
- (void)reportInfo:(id)a0 slot:(id)a1;
- (void)collectInfo:(id)a0 caller:(id)a1 slot:(id)a2;
- (BOOL)isValid:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
