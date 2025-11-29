@class NSString, NSArray;

@interface GXTextModel : NSObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *images;
@property (copy, nonatomic) NSArray *ranges;

- (void)setupWithDic:(id)a0;
- (id)initWithDic:(id)a0;
- (void).cxx_destruct;

@end
