@class NSString;

@interface AWEHPHambCheckerConfig : NSObject <NSCopying>

@property (copy, nonatomic) NSString *moduleName;
@property (retain, nonatomic) Class checker;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isValidWithError:(id *)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
