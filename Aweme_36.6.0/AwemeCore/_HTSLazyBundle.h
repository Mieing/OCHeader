@class NSArray;

@interface _HTSLazyBundle : NSObject

@property (nonatomic) struct __CFBundle { } *bundleRef;
@property (retain, nonatomic) NSArray *moduleDelegates;
@property (nonatomic) BOOL isUnloading;

- (void).cxx_destruct;
- (id)init;

@end
