@class NSString;

@interface CJPayAnnieXBDXCommonImpl : NSObject <CJPayBDXCommonInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bindToProtocol;
+ (id)sharedInstance;

- (void)setDefaultDomainObject:(id)a0 forKey:(id)a1 inDomain:(id)a2;

@end
