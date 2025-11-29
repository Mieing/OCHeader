@class NSString;

@interface MMBankCardType : NSObject

@property (readonly, nonatomic) NSString *bankType;
@property (readonly, nonatomic) NSString *bankName;
@property (readonly, nonatomic) NSString *bankaccType;
@property (readonly, nonatomic) NSString *bankaccTypeName;
@property (readonly, nonatomic) BOOL isMaintainance;
@property (readonly, nonatomic) NSString *forbidWord;

+ (id)BankCardTypeWithBankType:(id)a0 bankName:(id)a1 bankaccType:(id)a2 bankaccTypeName:(id)a3 isMaintainance:(BOOL)a4 forbidWord:(id)a5;

- (id)initWithBankType:(id)a0 bankName:(id)a1 bankaccType:(id)a2 bankaccTypeName:(id)a3 isMaintainance:(BOOL)a4 forbidWord:(id)a5;
- (id)description;
- (void).cxx_destruct;

@end
