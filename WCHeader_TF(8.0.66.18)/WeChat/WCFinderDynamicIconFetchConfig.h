@class NSString, WCFinderDynamicIconFetchArgs, UIImage;

@interface WCFinderDynamicIconFetchConfig : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *defaultSVGName;
@property (retain, nonatomic) WCFinderDynamicIconFetchArgs *args;
@property (retain, nonatomic) UIImage *image;

- (void).cxx_destruct;

@end
