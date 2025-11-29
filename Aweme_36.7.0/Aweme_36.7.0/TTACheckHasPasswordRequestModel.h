@class NSString, NSDictionary;

@interface TTACheckHasPasswordRequestModel : NSObject

@property (copy, nonatomic) NSString *mobile;
@property (copy, nonatomic) NSString *target;
@property (nonatomic) BOOL needMix;
@property (copy, nonatomic) NSDictionary *extraDic;

- (void).cxx_destruct;
- (id)init;

@end
