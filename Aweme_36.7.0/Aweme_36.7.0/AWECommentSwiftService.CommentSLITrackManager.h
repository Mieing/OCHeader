@interface AWECommentSwiftService.CommentSLITrackManager : NSObject <AWECommentSLITrackProtocol> {
    void /* unknown type, empty encoding */ currentQueue;
    void /* unknown type, empty encoding */ sessions;
    void /* unknown type, empty encoding */ lock;
}

- (void)recordForOCWithSessionID:(id)a0 type:(unsigned long long)a1 stage:(unsigned long long)a2 extra:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
