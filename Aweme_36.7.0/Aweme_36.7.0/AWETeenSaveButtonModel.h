@class UIImage, NSString;

@interface AWETeenSaveButtonModel : NSObject

@property (nonatomic) unsigned long long buttonStyle;
@property (retain, nonatomic) UIImage *saveIcon;
@property (copy, nonatomic) NSString *saveTitle;
@property (retain, nonatomic) UIImage *cannotSaveIcon;
@property (retain, nonatomic) UIImage *shareIcon;
@property (copy, nonatomic) NSString *shareTitle;
@property (copy, nonatomic) NSString *loadingTitle;
@property (nonatomic) double loadingProgress;
@property (copy, nonatomic) NSString *noNetworkTitle;

- (void).cxx_destruct;

@end
