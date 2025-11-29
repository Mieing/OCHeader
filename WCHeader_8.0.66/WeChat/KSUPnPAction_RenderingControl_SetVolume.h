@interface KSUPnPAction_RenderingControl_SetVolume : KSUPnPAction

@property (nonatomic) long long volume;

- (id)actionName;
- (id)generateXMLForActionArguments;

@end
