@class NSString;

@interface AWELocationOption : NSObject

@property (nonatomic) BOOL newAdminVersion;
@property (copy, nonatomic) NSString *extraString;

- (id)toBDUGLocationOption;
- (id)initWithNewAdminVersion:(BOOL)a0;
- (void).cxx_destruct;

@end
