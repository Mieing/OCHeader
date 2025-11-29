@class NSString;

@interface AWEMRBizGuideCheckResultModel : NSObject

@property (nonatomic) BOOL success;
@property (copy, nonatomic) NSString *errorDesc;
@property (nonatomic) long long forbidType;

+ (id)generateResultModelWithResult:(BOOL)a0 forbidType:(long long)a1 errorDesc:(id)a2;

- (void).cxx_destruct;
- (id)description;

@end
