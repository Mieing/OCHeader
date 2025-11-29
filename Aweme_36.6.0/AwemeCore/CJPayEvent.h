@class NSString, CJPayVerifyInfoResponse;

@interface CJPayEvent : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id data;
@property (nonatomic) BOOL boolData;
@property (copy, nonatomic) NSString *stringData;
@property (copy, nonatomic) NSString *verifySource;
@property (nonatomic) unsigned long long verifySourceType;
@property (retain, nonatomic) CJPayVerifyInfoResponse *verifyInfoResponse;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 data:(id)a1;

@end
