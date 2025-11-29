@interface WxSmStorage : NSObject {
    struct { char root_path[512]; char device_id[65]; char business_id[65]; char user_id[65]; int flag; } baseCtx;
    int gErrorCode;
}

- (id)initWithRootPath:(id)a0 deviceId:(id)a1 businessId:(id)a2 userId:(id)a3;
- (BOOL)setWxValue:(id)a0 value:(id)a1;
- (id)getWxValue:(id)a0;
- (BOOL)hasWxValue:(id)a0;
- (BOOL)clearWxValue:(id)a0;
- (BOOL)clearWxAllValue;

@end
