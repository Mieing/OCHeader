@class NSString;

@interface KSUPnPUSNInfo : NSObject

@property (readonly, copy, nonatomic) NSString *USN;
@property (readonly, copy, nonatomic) NSString *UUID;
@property (readonly, nonatomic) long long category;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *version;

- (id)initWithUSN:(id)a0;
- (BOOL)parseUSN:(id)a0;
- (BOOL)_parseComponent:(id)a0 prefix:(id)a1 valueParts:(id *)a2;
- (void).cxx_destruct;

@end
