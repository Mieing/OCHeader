@interface LSEvent : NSObject

@property (retain, nonatomic) id param;
@property (retain, nonatomic) id source;

+ (id)eventWithParam:(id)a0 source:(id)a1;

- (id)initWithParam:(id)a0 source:(id)a1;
- (void).cxx_destruct;

@end
