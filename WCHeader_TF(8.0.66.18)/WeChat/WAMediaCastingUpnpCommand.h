@class NSString;

@interface WAMediaCastingUpnpCommand : NSObject

@property (nonatomic) unsigned long long commandType;
@property (copy, nonatomic) NSString *commandName;
@property (copy, nonatomic) NSString *commandServiceType;
@property (readonly, copy, nonatomic) NSString *XMLCommandName;

- (id)initWithCommandType:(unsigned long long)a0;
- (id)commandXMLString;
- (id)commandXMLBodyString;
- (void).cxx_destruct;

@end
