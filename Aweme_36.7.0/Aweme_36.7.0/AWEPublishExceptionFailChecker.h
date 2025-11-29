@class NSString, NSDictionary, AWEPublishExceptionFailContext, AWEVideoPublishViewModel;

@interface AWEPublishExceptionFailChecker : NSObject <AWEPublishExceptionCheckerProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) AWEPublishExceptionFailContext *failContext;
@property (retain, nonatomic) NSDictionary *featureParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkWithPublishModel:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (id)reportCustomParams;
- (void).cxx_destruct;

@end
