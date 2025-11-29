@class NSString;

@interface HMDThreadBacktraceFrame : NSObject

@property (nonatomic) unsigned long long stackIndex;
@property (nonatomic) unsigned long long address;
@property (nonatomic) unsigned long long imageAddress;
@property (copy, nonatomic) NSString *imageName;
@property (nonatomic) unsigned long long symbolAddress;
@property (copy, nonatomic) NSString *symbolName;

- (BOOL)symbolicate:(BOOL)a0;
- (BOOL)isAppAddress;
- (void).cxx_destruct;
- (id)description;
- (id)jsonObject;
- (id)init;

@end
