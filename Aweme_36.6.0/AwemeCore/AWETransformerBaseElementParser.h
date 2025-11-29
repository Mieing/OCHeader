@class NSString;

@interface AWETransformerBaseElementParser : NSObject <AWETransformerElementParserProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__parseElement:(id)a0 withDictionary:(id)a1;
- (void)parseElement:(id)a0 withData:(id)a1;
- (void)parseElement:(id)a0 withStyle:(id)a1;
- (void)parseElement:(id)a0 withLayout:(id)a1;
- (void)__parseElement:(id)a0 withEvents:(id)a1;
- (void)__parseElement:(id)a0 withTemplateEvent:(id)a1;
- (void)parseElement:(id)a0 withDictionary:(id)a1;
- (void)parseElement:(id)a0 withTemplateData:(id)a1;

@end
