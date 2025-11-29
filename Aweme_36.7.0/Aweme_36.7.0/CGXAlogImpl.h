@class NSString;

@interface CGXAlogImpl : NSObject <CGXALogDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)log:(long long)a0 tag:(id)a1 message:(id)a2;

@end
