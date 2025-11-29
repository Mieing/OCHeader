@class AWECommentInputViewMediaPickerConfigModel, AWECommentInputViewTextConfigModel, AWECommentInputViewElementConfigModel, AWECommentInputViewMiniEmojiConfigModel;

@interface AWECommentInputViewConfigModel : NSObject

@property (retain, nonatomic) AWECommentInputViewTextConfigModel *textConfigModel;
@property (retain, nonatomic) AWECommentInputViewElementConfigModel *elementConfigModel;
@property (retain, nonatomic) AWECommentInputViewMiniEmojiConfigModel *miniEmojiConfigModel;
@property (retain, nonatomic) AWECommentInputViewMediaPickerConfigModel *mediaPickerConfigModel;

- (void).cxx_destruct;
- (id)init;

@end
