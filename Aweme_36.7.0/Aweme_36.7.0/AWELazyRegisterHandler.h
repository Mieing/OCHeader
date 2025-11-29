@class NSValue;

@interface AWELazyRegisterHandler : NSObject

@property (retain, nonatomic) NSValue *handlerPointer;
@property (nonatomic) BOOL registed;
@property (nonatomic) unsigned long long reserved;

- (void).cxx_destruct;

@end
