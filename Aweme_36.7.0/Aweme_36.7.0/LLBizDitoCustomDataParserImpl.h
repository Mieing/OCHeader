@class NSString;

@interface LLBizDitoCustomDataParserImpl : NSObject <LLDitoCustomParserProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableDecoration;
- (id)getColorFromString:(id)a0;

@end
