@class NSString, UIImage, UIColor;

@interface BDPAnchorConfig : NSObject

@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL needSnapshot;
@property (nonatomic) long long type;

- (void).cxx_destruct;

@end
