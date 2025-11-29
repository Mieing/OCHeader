@class NSString;

@interface AWEDylibAdapter : NSObject <AWEDylibAdapterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadDylibIfNeedForKey:(id)a0 ofModule:(id)a1;
+ (void)loadDylibIfNeedForModule:(id)a0;
+ (id)dylibNameForKey:(id)a0 ofModule:(id)a1;


@end
