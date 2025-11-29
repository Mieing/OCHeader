@class NSObject;

@interface AWEWeakObject : NSObject

@property (weak, nonatomic) NSObject *content;

+ (id)weakObjectWithContent:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithContent:(id)a0;

@end
