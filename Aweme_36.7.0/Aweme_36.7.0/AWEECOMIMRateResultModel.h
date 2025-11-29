@class NSString, NSArray;

@interface AWEECOMIMRateResultModel : NSObject

@property (copy, nonatomic) NSString *stars;
@property (copy, nonatomic) NSArray *tagList;
@property (copy, nonatomic) NSString *commitedRemark;
@property (copy, nonatomic) NSString *commentValue;

- (id)initWithDict:(id)a0 commentKey:(id)a1;
- (void).cxx_destruct;

@end
