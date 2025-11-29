@class NSString, UrlStructV2;

@interface AnchorIconInfoV2 : GPBMessage

@property (retain, nonatomic) UrlStructV2 *iconURL;
@property (nonatomic) BOOL hasIconURL;
@property (copy, nonatomic) NSString *defaultIcon;
@property (nonatomic) BOOL hasDefaultIcon;

+ (id)descriptor;

- (id)iconURL;

@end
