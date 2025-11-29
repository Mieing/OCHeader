@class NSDictionary, NSString, NSError;

@interface AWECommentMediaManagerSwiftImpl.CommentMediaUploadResultInfo : NSObject <AWECommentMediaUploadResultInfoProtocol> {
    void /* function */ imageInfoDict;
    void /* function */ videoInfo;
    void /* function */ error;
    void /* function */ extra;
}

@property (nonatomic, copy) NSDictionary *imageInfoDict;
@property (nonatomic, copy) NSString *videoInfo;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSDictionary *extra;

- (void).cxx_destruct;
- (id)init;

@end
