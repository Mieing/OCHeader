@class UIView;
@protocol MFBanner;

@interface BannerWrap : NSObject

@property (retain, nonatomic) UIView<MFBanner> *banner;
@property (nonatomic) unsigned int index;
@property (nonatomic) BOOL editable;

- (void).cxx_destruct;

@end
