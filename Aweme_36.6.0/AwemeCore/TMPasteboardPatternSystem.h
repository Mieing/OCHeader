@class NSString;

@interface TMPasteboardPatternSystem : NSObject <TMSystem>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)preInvoke:(id)a0;
- (id)patternsWithCert:(id)a0;
- (id)allPatterns;
- (id)findiOS14Patterns:(id)a0;
- (id)iOS14SupportPatterns;
- (id)name;

@end
