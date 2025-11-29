@class AWEIMShareMessageSendRequest;

@interface AWEIMShareBasicImpl.ShareMessageSendTask : NSObject <AWEIMShareMessageSendTask> {
    void /* unknown type, empty encoding */ isCancelled;
    void /* unknown type, empty encoding */ taskID;
}

@property (nonatomic, readonly) AWEIMShareMessageSendRequest *request;

- (void).cxx_destruct;
- (id)init;
- (void)cancel;

@end
