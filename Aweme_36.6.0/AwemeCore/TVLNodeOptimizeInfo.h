@class NSDictionary, NSArray;

@interface TVLNodeOptimizeInfo : NSObject

@property (copy, nonatomic) NSDictionary *optimizeInfo;
@property (copy, nonatomic) NSDictionary *configInfo;
@property (readonly, copy, nonatomic) NSArray *IPs;

+ (id)nodeOptimizeInfoWithOptimizeInfo:(id)a0 configInfo:(id)a1;

- (id)logInfoWithIP:(id)a0;
- (id)nodeOptimizeInfo;
- (void).cxx_destruct;

@end
