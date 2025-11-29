@class NSString, UrlStructV2;

@interface AigcFollowShotLeftTopLabelStructV2 : GPBMessage

@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasText;
@property (retain, nonatomic) UrlStructV2 *URL;
@property (nonatomic) BOOL hasURL;

+ (id)descriptor;

@end
