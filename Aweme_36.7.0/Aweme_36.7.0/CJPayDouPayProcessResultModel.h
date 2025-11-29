@class NSString, NSDictionary;

@interface CJPayDouPayProcessResultModel : NSObject

@property (nonatomic) unsigned long long resultCode;
@property (copy, nonatomic) NSString *errorDesc;
@property (copy, nonatomic) NSDictionary *extParams;

- (BOOL)isReachOrderFinalState;
- (id)getErrorDesc;
- (void).cxx_destruct;
- (long long)getErrorCode;

@end
