@class BDCertLimitModel;

@interface BDCertLimitSearchResult : NSObject

@property (retain, nonatomic) BDCertLimitModel *limit;
@property (retain, nonatomic) BDCertLimitModel *fallbackLimit;

- (void).cxx_destruct;

@end
