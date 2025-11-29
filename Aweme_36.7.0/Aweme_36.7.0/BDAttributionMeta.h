@class NSString;

@interface BDAttributionMeta : NSObject

@property (nonatomic) double timestamp;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *factor;
@property (nonatomic) int factorType;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *extraInfo;
@property (copy, nonatomic) NSString *instanceName;

+ (id)metaFromFactor:(id)a0 enabled:(BOOL)a1 extraInfo:(id)a2;
+ (id)metaForInstance:(id)a0 factor:(id)a1 enabled:(BOOL)a2 extraInfo:(id)a3;

- (void).cxx_destruct;
- (id)init;

@end
