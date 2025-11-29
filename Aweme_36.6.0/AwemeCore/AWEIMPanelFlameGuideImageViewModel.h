@class UIImage, NSURL, NSString;

@interface AWEIMPanelFlameGuideImageViewModel : AWEIMPanelViewModel

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSURL *avatarUrl;
@property (retain, nonatomic) NSURL *flameUrl;
@property (retain, nonatomic) UIImage *flameImage;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long chatDaysCount;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL canShowPetElfIcon;

- (id)getChatDaysString;
- (void).cxx_destruct;
- (id)init;
- (id)getNameString;

@end
