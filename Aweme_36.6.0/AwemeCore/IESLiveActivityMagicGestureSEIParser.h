@class NSString;

@interface IESLiveActivityMagicGestureSEIParser : NSObject <IESLiveSEIParser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_sei_parser;

- (unsigned long long)seiType;
- (id)seiRootKey;
- (BOOL)checkTypeConditionWithMetaSEI:(id)a0;
- (id)parserMetaSEI:(id)a0;
- (unsigned long long)supportSEIModes;

@end
