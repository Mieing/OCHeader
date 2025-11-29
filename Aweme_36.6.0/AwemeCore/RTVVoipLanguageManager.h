@class NSString;

@interface RTVVoipLanguageManager : NSObject <RTVVoipLanguageManagerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)textTransformerForKey:(id)a0;
- (id)textTransformerForKey:(id)a0 defaultText:(id)a1;

@end
