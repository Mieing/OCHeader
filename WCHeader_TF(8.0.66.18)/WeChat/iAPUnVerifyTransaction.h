@class NSString, NSData;

@interface iAPUnVerifyTransaction : NSObject <PBCoding>

@property (retain, nonatomic) NSString *nsProductIdentifier;
@property (retain, nonatomic) NSData *dtReceipt;
@property (nonatomic) unsigned int uiTransactionDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_nsProductIdentifier;
+ (void)PBArrayAdd_dtReceipt;
+ (void)PBArrayAdd_uiTransactionDate;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
