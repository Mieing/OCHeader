@class NSDictionary;

@interface WAJSEventHandler_openWeComUserProfile : WAJSEventHandler_BaseEvent

@property (retain, nonatomic) NSDictionary *reqDic;
@property (nonatomic) unsigned long long scene;

- (void)handleJSEvent:(id)a0;
- (void)showOpenIMContactInfoForThirdAppViewControllerWithDataUrl:(id)a0 targetContact:(id)a1 spamWording:(id)a2;
- (void).cxx_destruct;

@end
