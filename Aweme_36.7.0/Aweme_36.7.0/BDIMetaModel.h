@class NSString, NSDictionary;

@interface BDIMetaModel : NSObject

@property (nonatomic) BOOL debug;
@property (copy, nonatomic) NSString *publicPath;
@property (copy, nonatomic) NSDictionary *externals;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1;

@end
