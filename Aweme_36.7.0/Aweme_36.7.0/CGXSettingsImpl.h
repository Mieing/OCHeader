@class NSString;

@interface CGXSettingsImpl : NSObject <CGXSettingsDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (id)getValue:(id)a0;

@end
