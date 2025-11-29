@class NSString;

@interface WAMediaCastingUpnpCommand_SetAVTransportURI : WAMediaCastingUpnpCommand

@property (retain, nonatomic) NSString *uri;

+ (id)commandWithURI:(id)a0;

- (id)initWithURI:(id)a0;
- (id)commandXMLBodyString;
- (void).cxx_destruct;

@end
