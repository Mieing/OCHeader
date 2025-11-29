@class NSString;

@interface KSUPnPAction_AVTransport_SetAVTransportURI : KSUPnPAction

@property (copy, nonatomic) NSString *transportURI;
@property (copy, nonatomic) NSString *title;

- (id)actionName;
- (id)generateXMLForActionArguments;
- (void).cxx_destruct;

@end
