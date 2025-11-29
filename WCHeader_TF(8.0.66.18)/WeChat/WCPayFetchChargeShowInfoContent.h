@class NSString;

@interface WCPayFetchChargeShowInfoContent : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSString *name_color;
@property (retain, nonatomic) NSString *value_color;

+ (id)GenFromDictionary:(id)a0;

- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
