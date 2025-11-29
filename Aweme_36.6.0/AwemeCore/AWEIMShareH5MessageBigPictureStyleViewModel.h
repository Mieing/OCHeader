@class AWEIMShareH5Message, AWEIMMessageConversation, NSString;

@interface AWEIMShareH5MessageBigPictureStyleViewModel : NSObject <AWEIMBigPictureStyleTableViewCellViewModelProtocol>

@property (retain, nonatomic) AWEIMShareH5Message *message;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configBottomLabel:(id)a0;
- (void)configIconImageView:(id)a0;
- (void)configCoverImageView:(id)a0;
- (id)initWithMessage:(id)a0 conversation:(id)a1;
- (id)p_placeholderWithSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)menuItems;

@end
