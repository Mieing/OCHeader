@class NSString;

@interface AWEMRForceNativeDialogButtonConfig : NSObject <NSCopying>

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long style;
@property (nonatomic) long long countDown;
@property (nonatomic) long long actionType;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isValidWithError:(id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
