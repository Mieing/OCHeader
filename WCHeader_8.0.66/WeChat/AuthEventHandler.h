@interface AuthEventHandler : ProtobufEventHandler {
    struct ec_key_st { } *ecdh_key;
    unsigned int ct1;
}

- (id)init;
- (void)dealloc;
- (void)OnProtocolStart:(id)a0 shouldContinue:(BOOL *)a1;
- (void)changeForMessage:(id)a0;
- (void)OnProtocolResponse:(id)a0 shouldContinue:(BOOL *)a1;
- (void)OnDisasterAuthResponse:(id)a0 shouldContinue:(BOOL *)a1;
- (void)OnNonDisasterAuthResponse:(id)a0 shouldContinue:(BOOL *)a1;

@end
