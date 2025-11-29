@class NSString;

@interface SECSimpleCnphoct : NSObject <SECCnphoctProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)deCnphoctData:(id)a0 withKey:(id)a1 error:(id *)a2;
- (id)cnphoctData:(id)a0 withKey:(id)a1 error:(id *)a2;

@end
