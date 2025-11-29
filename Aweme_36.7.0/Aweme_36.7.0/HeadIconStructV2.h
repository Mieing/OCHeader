@class NSString, ComponentUrlStructV2;

@interface HeadIconStructV2 : GPBMessage

@property (copy, nonatomic) NSString *URL;
@property (nonatomic) BOOL hasURL;
@property (nonatomic) int width;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) int height;
@property (nonatomic) BOOL hasHeight;
@property (nonatomic) int show;
@property (nonatomic) BOOL hasShow;
@property (retain, nonatomic) ComponentUrlStructV2 *iconURL;
@property (nonatomic) BOOL hasIconURL;

+ (id)descriptor;

@end
