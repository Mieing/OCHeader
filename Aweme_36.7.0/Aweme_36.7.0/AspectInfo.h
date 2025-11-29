@class NSArray, NSInvocation, NSString;

@interface AspectInfo : NSObject <AspectInfo>

@property (readonly, nonatomic) id instance;
@property (readonly, nonatomic) NSArray *arguments;
@property (readonly, nonatomic) NSInvocation *originalInvocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInstance:(id)a0 invocation:(id)a1;
- (void).cxx_destruct;

@end
