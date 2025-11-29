@class AWEIMMessage, AWEIMMessageConversation, NSString;
@protocol IESIMCommentShareCommentBubbleViewModelProtocol;

@interface AWEIMVideoCommentShareTableViewCellViewModel : NSObject <AWEIMVideoCommentShareTableViewCellViewModelProtocol>

@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) BOOL awemeAvailiable;
@property (retain, nonatomic) id<IESIMCommentShareCommentBubbleViewModelProtocol> bubleViewModel;
@property (nonatomic) BOOL commentAvailiable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (struct CGSize { double x0; double x1; })p_originCoverSize;
+ (BOOL)awemeAvailiableWithMsg:(id)a0;

- (id)initWithMessage:(id)a0 conversation:(id)a1;
- (id)supportMenuItemTypes;
- (void)updateWithMessage:(id)a0 conversation:(id)a1;
- (void)p_updateMessageSize;
- (struct CGSize { double x0; double x1; })quoteImageSize;
- (id)unAvailiableText;
- (void)p_updateCommentShareModelWithMessage:(id)a0;
- (id)quoteCoverUrlList;
- (struct CGSize { double x0; double x1; })quoteCoverSize;
- (double)quoteImageViewTopOffset;
- (void).cxx_destruct;

@end
