@class NSString;

@interface AWEHPPzDomainHomepageObserver : NSObject <AWEPzBusinessObserverProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)domainConfigDidChangeWithName:(id)a0;

@end
