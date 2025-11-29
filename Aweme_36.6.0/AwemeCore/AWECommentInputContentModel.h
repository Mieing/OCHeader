@class NSString, NSArray, AWECommentAudioModel, AWEIMStickerModel;

@interface AWECommentInputContentModel : NSObject

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSArray *extraInfo;
@property (retain, nonatomic) AWEIMStickerModel *sticker;
@property (copy, nonatomic) NSString *imageSource;
@property (copy, nonatomic) NSArray *imageModels;
@property (retain, nonatomic) AWECommentAudioModel *audioModel;

- (void).cxx_destruct;

@end
