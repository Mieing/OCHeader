@class NSError, RACSubject;

@interface HTSLiveAsyncResult : NSObject {
    RACSubject *_stateSubject;
}

@property (readonly, nonatomic) BOOL finished;
@property (readonly, nonatomic) id result;
@property (readonly, nonatomic) NSError *error;

- (id)onResult;
- (void).cxx_destruct;
- (void)finishWithResult:(id)a0;
- (void)finishWithError:(id)a0;

@end
