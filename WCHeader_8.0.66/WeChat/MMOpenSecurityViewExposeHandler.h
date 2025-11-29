@class NSString;

@interface MMOpenSecurityViewExposeHandler : MMObject <OpenSecurityViewHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleSceneInEvent:(id)a0;

@end
