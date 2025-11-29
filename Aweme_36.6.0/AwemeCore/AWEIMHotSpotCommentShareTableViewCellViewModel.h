@class AWEIMMessage, AWEIMMessageConversation, NSString;
@protocol IESIMCommentShareCommentBubbleViewModelProtocol;

@interface AWEIMHotSpotCommentShareTableViewCellViewModel : NSObject <AWEIMCommentShareTableViewCellViewModelProtocol>

@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) id<IESIMCommentShareCommentBubbleViewModelProtocol> bubleViewModel;
@property (nonatomic) BOOL commentAvailiable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;

- (id)initWithMessage:(id)a0 conversation:(id)a1;
- (id)supportMenuItemTypes;
- (void)updateWithMessage:(id)a0 conversation:(id)a1;
- (void)p_updateMessageSize;
- (id)unAvailiableText;
- (void)p_updateHotSpotCommentShareModelWithMessage:(id)a0;
- (void).cxx_destruct;

@end
