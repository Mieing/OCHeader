@class NSString, Protocol;

@interface AWEFeatureInjectionInfo : NSObject

@property (retain, nonatomic) Protocol *protocol;
@property (copy, nonatomic) NSString *sourceIdentifier;
@property (nonatomic) unsigned long long source;

+ (id)injectionInfoForProtocol:(id)a0 forContextObjectKey:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
