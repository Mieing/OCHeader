@class UrlStructV2;

@interface SeriesBarTagInfoV2 : GPBMessage

@property (retain, nonatomic) UrlStructV2 *iconForBar;
@property (nonatomic) BOOL hasIconForBar;
@property (nonatomic) int width;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) int height;
@property (nonatomic) BOOL hasHeight;

+ (id)descriptor;

@end
