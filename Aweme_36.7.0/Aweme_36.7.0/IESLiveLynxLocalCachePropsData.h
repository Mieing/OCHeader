@class NSString;

@interface IESLiveLynxLocalCachePropsData : NSObject <NSCoding>

@property (copy, nonatomic) NSString *jsonData;
@property (nonatomic) double costTime;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
