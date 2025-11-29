@class NSArray, NSString;

@interface IESLiveGameOpenPlatformRequestChecker : NSOperation

@property (copy, nonatomic) NSArray *domainAllowListArray;
@property (copy, nonatomic) NSString *versionType;

- (BOOL)checkIPV4AddressIsValid:(id)a0;
- (BOOL)checkLanIPWithURL:(id)a0;
- (BOOL)isComeFromIDE;
- (BOOL)checkIsHTTPSWithURLString:(id)a0;
- (BOOL)checkDomainAllowListWithURL:(id)a0;
- (id)checkRequestParamWithURLString:(id)a0;
- (void).cxx_destruct;

@end
