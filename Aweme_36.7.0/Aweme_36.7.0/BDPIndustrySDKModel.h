@class NSDictionary, NSString, BDPIndustrySDKPKGModel;

@interface BDPIndustrySDKModel : NSObject

@property (retain, nonatomic) BDPIndustrySDKPKGModel *mainPKG;
@property (retain, nonatomic) BDPIndustrySDKPKGModel *subPKG;
@property (retain, nonatomic) NSDictionary *aliasPages;
@property (copy, nonatomic) NSString *version;

- (void).cxx_destruct;

@end
