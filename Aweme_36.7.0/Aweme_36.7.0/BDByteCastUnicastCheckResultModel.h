@class NSDictionary, NSError;

@interface BDByteCastUnicastCheckResultModel : NSObject

@property (nonatomic) unsigned long long result;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)description;

@end
