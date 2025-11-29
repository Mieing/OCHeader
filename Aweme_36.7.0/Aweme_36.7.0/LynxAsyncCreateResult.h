@class NSString;
@protocol LynxServiceContainerProtocol;

@interface LynxAsyncCreateResult : NSObject <LynxAsyncCreateResultProtocol>

@property (retain, nonatomic) id<LynxServiceContainerProtocol> container;
@property (copy, nonatomic) NSString *identify;
@property (nonatomic) long long resultCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultErrorResult:(id)a0;

- (void).cxx_destruct;

@end
