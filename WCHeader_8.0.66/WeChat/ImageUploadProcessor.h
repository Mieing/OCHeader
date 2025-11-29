@class NSString, ImageUploadTaskController, CMessageWrap;

@interface ImageUploadProcessor : NSObject

@property (retain, nonatomic) NSString *taskID;
@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (weak, nonatomic) ImageUploadTaskController *context;

- (id)initWithMsgWrap:(id)a0 context:(id)a1;
- (void)start;
- (void)stop;
- (void).cxx_destruct;

@end
