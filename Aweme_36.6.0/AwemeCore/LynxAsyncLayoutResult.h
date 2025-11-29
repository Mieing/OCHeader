@class NSString;
@protocol LynxServiceContainerProtocol;

@interface LynxAsyncLayoutResult : NSObject <LynxAsyncLayoutResultProtocol>

@property (retain, nonatomic) id<LynxServiceContainerProtocol> container;
@property (copy, nonatomic) NSString *identify;
@property (nonatomic) long long resultCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultErrorResult:(id)a0 container:(id)a1;

- (void).cxx_destruct;

@end
