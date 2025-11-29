@interface AWECommentReportAdaptar : NSObject <AWECommentReportProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_commentReportManager;
}

- (void)commentReportWithFromType:(long long)a0 commentID:(id)a1 ownerID:(id)a2 commentWithEmoji:(BOOL)a3 hideComment:(BOOL)a4 isMultiReport:(BOOL)a5;
- (BOOL)shouldShowLynxReport;
- (void).cxx_destruct;
- (id)init;

@end
