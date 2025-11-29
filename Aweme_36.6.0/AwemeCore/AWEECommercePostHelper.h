@class NSString, AWEECHalfPostDataController;
@protocol ACCPublishServiceProtocol;

@interface AWEECommercePostHelper : NSObject <AWEPublishTaskMessage>

@property (retain, nonatomic) AWEECHalfPostDataController *postDataController;
@property (retain, nonatomic) id<ACCPublishServiceProtocol> publishService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)task:(id)a0 needResetWithInfo:(id)a1;
- (void)publishEventPostCommentVideoWithParams:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
