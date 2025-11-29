@class NSString;

@interface CSJWCMiniappResponseModel : NSObject <CSJModelSerialization>

@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fromDictionary:(id)a0;

- (BOOL)validOpenSDKInfo;
- (BOOL)validSchemeInfo;
- (void).cxx_destruct;
- (id)toDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
