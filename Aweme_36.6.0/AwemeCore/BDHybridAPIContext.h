@class NSString;

@interface BDHybridAPIContext : NSObject <BDHybridContextProtocol, NSCoding, NSCopying>

@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *apiName;
@property (copy, nonatomic) NSString *namescope;
@property (copy, nonatomic) NSString *moduleName;
@property (copy, nonatomic) NSString *apiType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createFromBridgeName:(id)a0 session:(id)a1;
+ (id)createFromBridgeName:(id)a0;
+ (id)createFromOtherAPI:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toDict;

@end
