@class UrlStructV2;

@interface SelectModelCoverStructV2 : GPBMessage

@property (retain, nonatomic) UrlStructV2 *horizontalCover;
@property (nonatomic) BOOL hasHorizontalCover;
@property (retain, nonatomic) UrlStructV2 *yCover;
@property (nonatomic) BOOL hasYCover;

+ (id)descriptor;

@end
