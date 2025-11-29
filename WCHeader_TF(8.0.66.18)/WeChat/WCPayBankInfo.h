@class NSString;

@interface WCPayBankInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSString *bind_serial;
@property (retain, nonatomic) NSString *polling_forbid_word;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_bind_serial;
+ (void)PBArrayAdd_polling_forbid_word;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
