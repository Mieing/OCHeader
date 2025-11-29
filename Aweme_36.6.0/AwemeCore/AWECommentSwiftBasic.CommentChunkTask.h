@interface AWECommentSwiftBasic.CommentChunkTask : NSObject <CSPChunkRequestDelegate> {
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ responseModelClass;
    void /* unknown type, empty encoding */ firstData;
    void /* unknown type, empty encoding */ secondData;
    void /* unknown type, empty encoding */ isSecondBeforeFirstData;
    void /* unknown type, empty encoding */ chunkMainCompletion;
    void /* unknown type, empty encoding */ chunkOtherCompletion;
    void /* unknown type, empty encoding */ finishCompletion;
    void /* unknown type, empty encoding */ repeatFirstCompletions;
    void /* unknown type, empty encoding */ repeatSecondCompletions;
    void /* unknown type, empty encoding */ repeatFinishCompletion;
    void /* unknown type, empty encoding */ $__lazy_storage_$_chunkRequestManager;
}

- (void)didReceiveJSON:(id)a0;
- (void)didReceiveAllData;
- (void)chunkRequestDidEndWithCommonResponse:(id)a0 withError:(id)a1 forceCanceled:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;

@end
