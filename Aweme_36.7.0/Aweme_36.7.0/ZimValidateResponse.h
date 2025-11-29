@class NSString, NSDictionary;

@interface ZimValidateResponse : NSObject

@property (nonatomic) int validationRetCode;
@property (nonatomic) int productRetCode;
@property (nonatomic) BOOL pb_hasNext;
@property (retain, nonatomic) NSString *nextProtocol;
@property (retain, nonatomic) NSDictionary *extParams;
@property (retain, nonatomic) NSString *retCodeSub;
@property (retain, nonatomic) NSString *retMessageSub;

+ (Class)extParamsElementClass;

- (void).cxx_destruct;

@end
