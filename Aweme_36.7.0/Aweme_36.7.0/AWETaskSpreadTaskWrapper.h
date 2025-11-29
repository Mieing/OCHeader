@class NSOperation;

@interface AWETaskSpreadTaskWrapper : NSObject

@property (retain, nonatomic) NSOperation *task;
@property (retain, nonatomic) id info;

+ (id)wrapperWithTask:(id)a0 info:(id)a1;
+ (id)wrapperWithTask:(id)a0;

- (void).cxx_destruct;
- (void)start;

@end
