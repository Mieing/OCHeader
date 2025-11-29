@class WCPayFetchChargeShowInfoContent;

@interface WCPayFetchChargeShowInfo : NSObject

@property (nonatomic) unsigned int m_id;
@property (retain, nonatomic) WCPayFetchChargeShowInfoContent *show_info;

+ (id)GenFromDictionary:(id)a0;

- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
