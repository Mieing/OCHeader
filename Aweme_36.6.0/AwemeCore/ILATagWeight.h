@class NSString;

@interface ILATagWeight : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) float weight;

- (id)initWithType:(unsigned long long)a0 tag:(id)a1 weight:(float)a2;
- (void).cxx_destruct;

@end
