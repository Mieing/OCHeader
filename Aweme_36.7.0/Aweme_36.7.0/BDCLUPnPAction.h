@class NSString, GDataXMLElement;

@interface BDCLUPnPAction : NSObject

@property (retain, nonatomic) GDataXMLElement *XMLElement;
@property (nonatomic) long long serviceType;
@property (readonly, copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *connectId;

- (id)getUPnPURLWithUrlModel:(id)a0 urlHeader:(id)a1;
- (id)getServiceType;
- (void)setArgumentValue:(id)a0 forName:(id)a1;
- (id)getSOAPAction;
- (id)getPostUrlStrWith:(id)a0;
- (id)getPostXMLFile;
- (void).cxx_destruct;
- (id)initWithAction:(id)a0;

@end
