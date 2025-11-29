@class NSDictionary, NSError;

@interface BDByteCastMulticastCheckResultModel : NSObject

@property (nonatomic) unsigned long long result;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) NSError *error;

+ (id)descriptionOfResult:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)description;

@end
