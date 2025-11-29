@class NSString;

@interface AWEPayTPPaySchemeHandler : NSObject <AWEPaySchemeURLStrategy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canHandle:(id)a0;
- (void)handle:(id)a0;

@end
