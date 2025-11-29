@class NSString, NSThread, JSContext, MMUIViewController;
@protocol WAProvideApiDelegate;

@interface WAProvideApiConfig : NSObject

@property (weak, nonatomic) JSContext *jsContext;
@property (weak, nonatomic) id<WAProvideApiDelegate> delegate;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *userName;
@property (weak, nonatomic) NSThread *thread;
@property (weak, nonatomic) MMUIViewController *parentViewController;
@property (retain, nonatomic) id userData;

- (void).cxx_destruct;

@end
