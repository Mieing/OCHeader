@class NSString;

@interface HMDAddressUnit : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long address;

- (id)unitToDict;
- (void).cxx_destruct;

@end
