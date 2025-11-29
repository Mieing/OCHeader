@class NSDictionary;

@interface __RTVStateRecorderItem : NSObject

@property (readonly, nonatomic) id state;
@property (readonly, nonatomic) NSDictionary *context;

+ (id)itemWithState:(id)a0 context:(id)a1;

- (id)initWithState:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
