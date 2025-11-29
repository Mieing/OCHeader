@class AWEIMSendMessageAttachmentObject, AWEIMShareGroupChatScreenShootModel;

@interface AWEIMGroupScreenShotShareContextModel : NSObject

@property (retain, nonatomic) AWEIMSendMessageAttachmentObject *attachment;
@property (retain, nonatomic) AWEIMShareGroupChatScreenShootModel *chatScreenShootModel;
@property (copy, nonatomic) id /* block */ outSideShareImage;
@property (copy, nonatomic) id /* block */ saveImageToAblumBlock;

- (void).cxx_destruct;

@end
