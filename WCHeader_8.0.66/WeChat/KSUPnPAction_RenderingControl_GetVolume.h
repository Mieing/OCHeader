@interface KSUPnPAction_RenderingControl_GetVolume : KSUPnPAction

@property (readonly, nonatomic) long long volume;

- (id)actionName;
- (id)generateXMLForActionArguments;
- (BOOL)parseActionBodyFromXMLData:(id)a0;

@end
