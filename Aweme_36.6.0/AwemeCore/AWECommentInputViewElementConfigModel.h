@class NSArray, AWECommentInputViewSendButtonConfigModel;

@interface AWECommentInputViewElementConfigModel : NSObject

@property (retain, nonatomic) AWECommentInputViewSendButtonConfigModel *sendElementModel;
@property (nonatomic) BOOL atEnable;
@property (nonatomic) BOOL emojiEnable;
@property (nonatomic) BOOL gifEnable;
@property (nonatomic) BOOL imageEnable;
@property (nonatomic) BOOL audioEnable;
@property (nonatomic) BOOL videoEnable;
@property (nonatomic) BOOL plusEnable;
@property (nonatomic) BOOL hashtagEnable;
@property (nonatomic) BOOL anonymousEnable;
@property (nonatomic) BOOL fullScreenEnable;
@property (nonatomic) unsigned long long imagePreviewMode;
@property (copy, nonatomic) NSArray *customExpandTitle;
@property (copy, nonatomic) NSArray *customExpandSelected;
@property (copy, nonatomic) id /* block */ atEnableWithModel;

- (void).cxx_destruct;
- (id)init;

@end
