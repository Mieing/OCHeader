@class NSString, FieldAreaInfo;

@interface WCPayFetchCashierWithField : NSObject

@property long long is_open_field_area;
@property (retain) FieldAreaInfo *field_area_info;
@property (retain) NSString *fetch_fee;
@property (retain) NSString *fetch_fee_symbol;

+ (id)GenFromDic:(id)a0;

- (void).cxx_destruct;

@end
