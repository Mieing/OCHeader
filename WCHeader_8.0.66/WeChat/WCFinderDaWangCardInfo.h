@class NSString, NSDateFormatter, WCFinderDaWangResponseBusiness;

@interface WCFinderDaWangCardInfo : NSObject

@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (copy, nonatomic) NSString *lastIPV4;
@property (copy, nonatomic) NSString *lastIPV6;
@property (copy, nonatomic) NSString *currentSeqId;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (retain, nonatomic) WCFinderDaWangResponseBusiness *lastResponseBusiness;
@property (nonatomic) BOOL hadRequestFinished;

- (id)init;
- (id)genSystemDict;
- (void)updateIP;
- (void)updateIPV4:(id)a0 IPV6:(id)a1;
- (BOOL)IPStringsEqual:(id)a0 newIP:(id)a1;
- (void)getRequestWithBusinessParameter:(id)a0;
- (id)sm3WithValue:(id)a0 key:(id)a1;
- (id)hexStringWithData:(id)a0;
- (id)getSM3StringWithSystemParameter:(id)a0 businessParameter:(id)a1;
- (id)recursiveStringFromObject:(id)a0;
- (id)_generateCombinedStringWithSystemParameter:(id)a0 businessParameter:(id)a1;
- (unsigned long long)checkIPAddressType:(id)a0;
- (void).cxx_destruct;

@end
