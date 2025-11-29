@interface ARTBusinessCfgCond : NSObject <NSCopying>

@property (nonatomic) BOOL bizEnabled;
@property (nonatomic) BOOL configEnabled;
@property (nonatomic) BOOL memWarningEnabled;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
