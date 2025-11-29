@class NSString;

@interface AWELiveOpenURLImpl : NSObject <IESLiveOpenURL>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canOpenURL:(id)a0;
- (void)openURL:(id)a0;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;

@end
