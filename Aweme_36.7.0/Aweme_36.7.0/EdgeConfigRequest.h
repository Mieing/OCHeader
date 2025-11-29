@class NSString, NSDictionary;

@interface EdgeConfigRequest : NSObject

@property (retain, nonatomic) NSString *os;
@property (retain, nonatomic) NSString *apdid;
@property (retain, nonatomic) NSDictionary *deviceDataMap;

+ (Class)deviceDataMapElementClass;

- (void).cxx_destruct;

@end
