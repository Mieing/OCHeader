@class NSString;

@interface BDHybridPageContext : NSObject <BDHybridContextProtocol, NSCoding, NSCopying>

@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (copy, nonatomic) NSString *simplePageIdentifier;
@property (copy, nonatomic) NSString *pageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createFromPageId:(id)a0 type:(id)a1 session:(id)a2;
+ (id)createFromPageId:(id)a0 type:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toDict;

@end
