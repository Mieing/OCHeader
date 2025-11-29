@class NSString, NSData, NSDictionary;

@interface WXPLiteAppNetworkResponse : NSObject <LiteAppDynamicModuleObject>

@property (nonatomic) long long errCode;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithErrCode:(long long)a0 errMsg:(id)a1 data:(id)a2;
- (id)toDictionary;
- (void).cxx_destruct;

@end
