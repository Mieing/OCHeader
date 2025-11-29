@class NSString, AWEPublishExceptionJSONValidContext, AWEVideoPublishViewModel, NSMutableArray;

@interface AWEPublishExceptionJSONValidChecker : NSObject <AWEPublishExceptionCheckerProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) AWEPublishExceptionJSONValidContext *jsonValidContext;
@property (nonatomic) BOOL isKeyNotString;
@property (retain, nonatomic) NSMutableArray *invalidKeyArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkWithPublishModel:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (id)reportCustomParams;
- (void).cxx_destruct;

@end
