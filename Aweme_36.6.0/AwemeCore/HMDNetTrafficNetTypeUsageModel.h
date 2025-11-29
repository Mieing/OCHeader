@class NSString, NSMutableArray;

@interface HMDNetTrafficNetTypeUsageModel : NSObject

@property (retain, nonatomic) NSMutableArray *bizUsage;
@property (copy, nonatomic) NSString *netTypeName;
@property (nonatomic) unsigned long long netType;
@property (nonatomic) long long totalUsage;

+ (id)newModelWithNetType:(unsigned long long)a0;

- (void).cxx_destruct;

@end
