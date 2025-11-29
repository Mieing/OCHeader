@class NSMutableDictionary;

@interface AWEEcomSearchProtocolValidator : NSObject

@property (retain, nonatomic) NSMutableDictionary *infoMap;

+ (BOOL)checkObject:(id)a0 conformProtocol:(id)a1;
+ (id)sharedValidator;

- (BOOL)checkObject:(id)a0 conformProtocol:(id)a1;
- (void).cxx_destruct;

@end
