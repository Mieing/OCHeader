@class NSString;

@interface WCFinderPostMusicStore : NSObject <WCFinderGlobalStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)errCodeForLimitType:(long long)a0;
+ (id)functionName;
+ (void)showPicker:(long long)a0 limiter:(id)a1 chatParams:(id)a2 fromVC:(id)a3 complete:(id /* block */)a4;
+ (void)showFeedPicker:(id /* block */)a0 limiter:(id)a1 fromVC:(id)a2;
+ (void)showFilePicker:(id /* block */)a0 limiter:(id)a1 fromVC:(id)a2;
+ (void)showChatFilePicker:(id /* block */)a0 params:(id)a1 limiter:(id)a2 fromVC:(id)a3;
+ (void)showTypePicker:(long long)a0 onView:(id)a1 complete:(id /* block */)a2;

- (id)handle:(id)a0 storeIns:(id)a1;

@end
