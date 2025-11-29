@interface AWECommentInputViewSwiftImpl.CommentInputContentCacheManager : NSObject <AWECommentInputContentCacheProtocol> {
    void /* unknown type, empty encoding */ cacheDic;
    void /* unknown type, empty encoding */ cacheArray;
    void /* unknown type, empty encoding */ maxCount;
}

- (id)inputContentForItemID:(id)a0 commentID:(id)a1;
- (void)setInputContent:(id)a0 forItemID:(id)a1 commentID:(id)a2;
- (void)removeInputContentForItemID:(id)a0 commentID:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
