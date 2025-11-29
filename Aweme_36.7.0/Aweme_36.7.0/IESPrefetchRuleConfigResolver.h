@class NSString;

@interface IESPrefetchRuleConfigResolver : NSObject <IESPrefetchConfigResolver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resolveConfig:(id)a0;
- (id)resolveItem:(id)a0;
- (id)resolveQuery:(id)a0;
- (id)resolveRule:(id)a0 forName:(id)a1;
- (id)resolveRegexRule:(id)a0 forName:(id)a1;

@end
