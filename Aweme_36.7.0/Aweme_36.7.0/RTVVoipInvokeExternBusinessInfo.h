@class NSString;

@interface RTVVoipInvokeExternBusinessInfo : NSObject

@property (readonly, nonatomic) unsigned long long businessType;
@property (readonly, copy, nonatomic) NSString *businessAppID;
@property (readonly, copy, nonatomic) NSString *businessInfo;

- (id)initWithAppID:(id)a0 businessType:(unsigned long long)a1 businessInfo:(id)a2;
- (id)initWithAppID:(id)a0 businessInfo:(id)a1;
- (void).cxx_destruct;

@end
