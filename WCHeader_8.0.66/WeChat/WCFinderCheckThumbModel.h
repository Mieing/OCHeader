@class UIImage;

@interface WCFinderCheckThumbModel : NSObject

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long selectTimeStamp;
@property (nonatomic) unsigned long long calcBlackFrameDuration;
@property (nonatomic) BOOL useAlgorithmCover;

- (id)yy_modelDeepCopyWithConfigTag:(id)a0;
- (void).cxx_destruct;

@end
