@class NSDictionary;
@protocol IESIMConversationProtocol;

@interface AWEIMMixPhotoRequestTracker : NSObject

@property (retain, nonatomic) id<IESIMConversationProtocol> con;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL success;
@property (nonatomic) long long errorCode;

- (id)initWithConversation:(id)a0 extraInfo:(id)a1;
- (void)stopEvent:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)stopEvent:(id)a0 success:(BOOL)a1 error:(id)a2 stage:(id)a3;
- (id)initWithConversationID:(id)a0 extraInfo:(id)a1;
- (void).cxx_destruct;
- (void)start;

@end
