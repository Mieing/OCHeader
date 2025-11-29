@class NSString, AWECommentRequestExtraModel;

@interface AWECommentPanelContainerSwiftImpl.CommentViewControllerPreRequestModel : NSObject <AWECommentViewControllerRequestProtocol> {
    void /* function */ commentChannelID;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ container;
}

@property (nonatomic) BOOL needDelayFetch;
@property (nonatomic, retain) AWECommentRequestExtraModel *commentRequestExtraModel;
@property (nonatomic, copy) NSString *commentChannelID;

- (void)touchPreRequestComments;
- (void).cxx_destruct;
- (id)init;

@end
