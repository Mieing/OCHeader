@class NSString, NSArray;

@interface IESGCPDetailDynamicProtocolComponentCriteria : NSObject

@property (copy, nonatomic) NSString *componentId;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long offset;
@property (nonatomic) long long size;
@property (copy, nonatomic) NSArray *requiredNodes;

- (void).cxx_destruct;
- (id)requestParams;

@end
