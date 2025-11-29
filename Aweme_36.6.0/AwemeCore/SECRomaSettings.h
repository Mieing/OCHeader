@class NSString;

@interface SECRomaSettings : NSObject

@property (copy) NSString *accessKey;

+ (id)shared;

- (BOOL)interceptorEnabled;
- (id)referList;
- (void).cxx_destruct;
- (BOOL)enabled;

@end
