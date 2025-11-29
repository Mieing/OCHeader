@class ForwardMessageLogicController, NSString;

@interface MMImageActionForwardItem : MMImageActionSheetItem <ForwardMessageLogicDelegate>

@property (retain, nonatomic) ForwardMessageLogicController *logic;
@property (retain, nonatomic) NSString *staticImgUuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)handleWithImage;
- (void)forwardImageWithContact:(id)a0;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void).cxx_destruct;

@end
