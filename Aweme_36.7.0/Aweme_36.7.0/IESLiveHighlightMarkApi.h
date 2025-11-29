@class NSNumber;
@protocol IESLiveHTTPTask;

@interface IESLiveHighlightMarkApi : HTSLiveApi

@property (retain, nonatomic) NSNumber *roomID;
@property (weak, nonatomic) id<IESLiveHTTPTask> currentTask;

- (void)didSetAttachingDIContext;
- (void)fetchHighlightWithCompletion:(id /* block */)a0;
- (void)requestForRecordWithAction:(long long)a0 recordID:(long long)a1 timestamp:(long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
