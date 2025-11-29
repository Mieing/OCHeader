@class UIImage;

@interface ILADecodeFrameModel : NSObject

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long framePts;
@property (nonatomic) long long orientation;

- (void).cxx_destruct;

@end
