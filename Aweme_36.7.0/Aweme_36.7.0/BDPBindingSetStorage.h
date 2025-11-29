@class NSString;

@interface BDPBindingSetStorage : NSObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSString *dataType;
@property (nonatomic) BOOL isSync;

- (void).cxx_destruct;

@end
