@class NSString;

@interface PreEnterShowPolicyListConfig : NSObject

@property (retain, nonatomic) NSString *policylist_url;
@property (retain, nonatomic) NSString *policylist_list;
@property (retain, nonatomic) NSString *policylist_ticket;
@property (retain, nonatomic) NSString *deviceid;
@property (retain, nonatomic) NSString *doublecheck_content;
@property (retain, nonatomic) NSString *doublecheck_cancel;
@property (retain, nonatomic) NSString *doublecheck_ok;
@property (nonatomic) BOOL hideclosebtn;

- (void).cxx_destruct;

@end
