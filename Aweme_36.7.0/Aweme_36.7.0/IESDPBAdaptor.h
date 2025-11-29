@class NSString, NSMutableDictionary;

@interface IESDPBAdaptor : NSObject <IESDPBAdaptorProtocol> {
    BOOL _enabled;
}

@property (retain, nonatomic) NSString *business;
@property (retain, nonatomic) NSMutableDictionary *definitionRegisters;
@property (retain, nonatomic) NSMutableDictionary *shrinkRegisters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canRequestInPBForParseConfig:(id)a0 reason:(id *)a1;
- (BOOL)canRequestInPBForParseConfig:(id)a0;
- (void)processDynamicPBConfigForChannel:(id)a0 withDefinitionString:(id)a1 shrinkString:(id)a2;
- (id)parseFromDynamicPBData:(id)a0 withParseConfig:(id)a1;
- (id)parseMessageWithPBData:(id)a0 withParseConfig:(id)a1;
- (void).cxx_destruct;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)a0;
- (id)initWithBusiness:(id)a0;

@end
