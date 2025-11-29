@class NSString, UIColor, UIImage;

@interface AWEIronManLiveAnchorConfig : NSObject

@property (nonatomic) long long operationType;
@property (nonatomic) BOOL needSnapshot;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIImage *image;

- (void).cxx_destruct;
- (id)init;

@end
