@class NSString;

@interface BDPTTOfflineURLParser : NSObject <BDPURLParserProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)parseRequestURL:(id)a0;

@end
