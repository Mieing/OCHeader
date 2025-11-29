@class NSString;
@protocol TVLDNSParserDelegate;

@interface TVLBaseDNSParser : NSObject <TVLDNSParsing>

@property (weak, nonatomic) id<TVLDNSParserDelegate> delegate;
@property (copy, nonatomic) NSString *hostname;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
