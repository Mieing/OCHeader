@class UIImage;

@interface TIMDecodeFrameModel : NSObject

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long framePts;
@property (nonatomic) long long orientation;

- (void).cxx_destruct;

@end
