@class UIImage, NSString;

@interface BDSCLandscapeNoticeTipViewConfig : NSObject

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *tagText;
@property (copy, nonatomic) NSString *expandTagText;
@property (nonatomic) long long tagType;
@property (copy, nonatomic) id /* block */ tagAction;

- (void).cxx_destruct;

@end
