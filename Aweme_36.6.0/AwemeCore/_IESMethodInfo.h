@class NSMethodSignature;

@interface _IESMethodInfo : NSObject

@property (retain, nonatomic) NSMethodSignature *signature;
@property (nonatomic) BOOL twoArgsAreObjects;
@property (nonatomic) BOOL retIsVoidOrObject;

- (void).cxx_destruct;

@end
