@class NSArray;

@interface AWEKefuRTCMessageListener : NSObject

@property (readonly, nonatomic) NSArray *messageTypes;
@property (readonly, nonatomic) id /* block */ callBack;

+ (id)listenerWithMessageTypes:(id)a0 callBack:(id /* block */)a1;

- (id)initWithMessageTypes:(id)a0 callBack:(id /* block */)a1;
- (void).cxx_destruct;

@end
