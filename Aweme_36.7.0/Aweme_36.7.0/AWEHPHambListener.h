@class NSArray;

@interface AWEHPHambListener : NSObject

@property (readonly, nonatomic) NSArray *names;
@property (readonly, nonatomic) id /* block */ callBack;

+ (id)listenerWithNames:(id)a0 callBack:(id /* block */)a1;

- (id)initWithNames:(id)a0 callBack:(id /* block */)a1;
- (void).cxx_destruct;

@end
