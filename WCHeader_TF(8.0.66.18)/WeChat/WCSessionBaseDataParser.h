@class NSString;

@interface WCSessionBaseDataParser : MMObject <WCSessionDataParserDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)parseSessionFlowConfigModel:(id)a0;
- (id)parseSessionConfigModel:(id)a0;
- (id)parsePagePathConfigModel:(id)a0 withSessionPageId:(id)a1 withReport:(BOOL)a2;
- (id)parsePagePathUnitConfigModel:(id)a0;
- (id)parseDataPathConfigModel:(id)a0;
- (id)parseViewOperationConfigModel:(id)a0;
- (id)parseSessionUBAConfigModels:(id)a0;
- (id)parseSessionUBAUnitConfigModel:(id)a0;

@end
