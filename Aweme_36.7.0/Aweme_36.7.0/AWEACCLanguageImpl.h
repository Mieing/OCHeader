@class NSString;

@interface AWEACCLanguageImpl : NSObject <ACCLanguageProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)formatedNumber:(long long)a0;
- (id)localizedStringWithFormat:(id)a0 defaultTranslation:(id)a1;
- (void)disableLocalizationsOfObj:(id)a0;
- (id)pluralizedStringWithString:(id)a0 count:(long long)a1;
- (id)localizedStringWithFormat:(id)a0 defaultTranslation:(id)a1 parameters:(char *)a2;
- (id)localizedStringWithStr:(id)a0 defaultTranslation:(id)a1;

@end
