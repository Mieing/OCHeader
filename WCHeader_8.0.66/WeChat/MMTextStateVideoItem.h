@class NSString, MMShortVideoParamModel, UIImage, EditVideoAttr;

@interface MMTextStateVideoItem : NSObject

@property (retain, nonatomic) NSString *videoPath;
@property (retain, nonatomic) UIImage *videoThumbImage;
@property (retain, nonatomic) EditVideoAttr *editVideoAttr;
@property (retain, nonatomic) MMShortVideoParamModel *videoParamModel;

- (void).cxx_destruct;

@end
