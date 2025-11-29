@class CSJApp, NSString, NSArray, CSJABTest, CSJAdSlot, CSJDVHelper, CSJUser, NSMutableArray, NSNumber;

@interface CSJUnionRequestModel : CSJRequestModel <CSJToDictionary>

@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *adSDKVersion;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *did;
@property (retain, nonatomic) CSJUser *user;
@property (copy, nonatomic) NSString *sourceType;
@property (retain, nonatomic) CSJApp *app;
@property (retain, nonatomic) CSJDVHelper *device;
@property (copy, nonatomic) NSString *ua;
@property (copy, nonatomic) NSString *ip;
@property (copy, nonatomic) NSString *ipv4;
@property (copy, nonatomic) NSString *ipv6;
@property (retain, nonatomic) NSMutableArray *adslotsAry;
@property (retain, nonatomic) NSNumber *req_type;
@property (retain, nonatomic) NSNumber *ts;
@property (copy, nonatomic) NSString *req_sign;
@property (copy, nonatomic) NSArray *source_temai_product_ids;
@property (retain, nonatomic) CSJABTest *abTest;
@property (copy, nonatomic) NSArray *network_id_list;
@property (copy, nonatomic) NSString *preSessions;
@property (copy, nonatomic) NSString *playAgainRit;
@property (weak, nonatomic) CSJAdSlot *slot;
@property (retain, nonatomic) NSNumber *code_group_id;
@property (copy, nonatomic) NSString *extra_data;
@property (copy, nonatomic) NSString *material_keys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unionRequestModel:(id)a0 slotParams:(id)a1 reqType:(long long)a2;

- (id)_mergedJSONStringWithJSONString:(id)a0 coverJSONString:(id)a1;
- (void).cxx_destruct;
- (id)dictionaryValue;

@end
