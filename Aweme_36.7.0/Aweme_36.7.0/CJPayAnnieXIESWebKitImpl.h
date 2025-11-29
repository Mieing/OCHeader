@class NSString;

@interface CJPayAnnieXIESWebKitImpl : NSObject <CJPayIESWebKitInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bindToProtocol;
+ (id)sharedInstance;

- (void)allowDisplayingKeyboardWithoutUserAction:(BOOL)a0;

@end
