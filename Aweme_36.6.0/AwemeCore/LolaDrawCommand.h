@class NSString;

@interface LolaDrawCommand : NSObject

@property (readonly, copy, nonatomic) NSString *typeStr;

- (void)configWithData:(id)a0 context:(id)a1;
- (void)draw:(id)a0 context:(struct CGContext { } *)a1;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)recycle;

@end
