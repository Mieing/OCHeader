@interface IESLiveKTVSingingRankFeedbackSEIParser : IESLiveBaseKTVSEIParser

+ (void)ieslivekit_register_sei_parser;

- (unsigned long long)seiType;
- (id)seiRootKey;
- (BOOL)checkTypeConditionWithMetaSEI:(id)a0;
- (id)customizeIndexKeyWithMetaSEI:(id)a0;

@end
