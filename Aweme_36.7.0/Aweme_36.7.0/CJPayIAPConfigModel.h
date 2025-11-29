@class NSArray, NSString;

@interface CJPayIAPConfigModel : JSONModel

@property (nonatomic) BOOL useNewIAP;
@property (nonatomic) BOOL enableSK2;
@property (nonatomic) BOOL enableSK1Observer;
@property (nonatomic) double transactionVerifyTimeInterval;
@property (nonatomic) BOOL isNeedPendingReturnFail;
@property (copy, nonatomic) NSArray *loadingDescription;
@property (copy, nonatomic) NSArray *loadingDescriptionTime;
@property (copy, nonatomic) NSString *disableSwiftSk1StuckFix;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
