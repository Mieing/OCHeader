@class NSString, NSMutableArray;

@interface WCPayDigitalCertPayManageResp : NSObject

@property (nonatomic) int m_showCrtInfo;
@property (nonatomic) int m_isCrtInstall;
@property (retain, nonatomic) NSMutableArray *m_crtList;
@property (copy, nonatomic) NSString *crt_entry_title;
@property (copy, nonatomic) NSString *crt_entry_desc;
@property (copy, nonatomic) NSString *crt_status_name;
@property (copy, nonatomic) NSString *crt_item_logo_url;
@property (nonatomic) int cert_encrypt_type;

+ (id)GenFromDictionary:(id)a0;

- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
