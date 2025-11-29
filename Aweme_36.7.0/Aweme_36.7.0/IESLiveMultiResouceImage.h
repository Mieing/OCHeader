@class UIImage, NSArray;

@interface IESLiveMultiResouceImage : NSObject

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSArray *urls;

- (void).cxx_destruct;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)a0;
- (void)applyToImageView:(id)a0;

@end
