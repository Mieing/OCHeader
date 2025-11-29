@class NSString, UIImage;

@interface BDPAnchorConfig_HG : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) long long type;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ pageChangeBlock;

- (id)backgroundUIColor;
- (void).cxx_destruct;
- (id)init;

@end
