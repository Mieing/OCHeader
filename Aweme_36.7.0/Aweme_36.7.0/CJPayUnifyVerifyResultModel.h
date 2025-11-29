@class NSString, NSDictionary;

@interface CJPayUnifyVerifyResultModel : NSObject

@property (nonatomic) unsigned long long resultType;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *lastVerifyProduct;
@property (copy, nonatomic) NSDictionary *extData;

+ (id)resultModelWithResultType:(unsigned long long)a0;
+ (id)eventMsg:(unsigned long long)a0;

- (id)defaultMsg;
- (void).cxx_destruct;

@end
