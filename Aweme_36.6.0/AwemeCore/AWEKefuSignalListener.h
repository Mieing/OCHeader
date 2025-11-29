@class NSArray;

@interface AWEKefuSignalListener : NSObject

@property (readonly, nonatomic) NSArray *signalNames;
@property (readonly, nonatomic) id /* block */ callBack;

+ (id)listenerWithSignalNames:(id)a0 callBack:(id /* block */)a1;

- (id)initWithSignalNames:(id)a0 callBack:(id /* block */)a1;
- (void).cxx_destruct;

@end
