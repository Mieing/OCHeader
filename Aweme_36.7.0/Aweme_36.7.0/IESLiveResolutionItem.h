@class NSString, UIImage;

@interface IESLiveResolutionItem : NSObject

@property (copy, nonatomic) NSString *resolutionTitleString;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL isPaidResolution;
@property (nonatomic) BOOL hasPaidResolution;
@property (retain, nonatomic) UIImage *tagImage;
@property (nonatomic, getter=isDisable) BOOL disable;

- (void).cxx_destruct;

@end
