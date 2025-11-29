@class UrlStructV2;

@interface WaterMarkInfoV2 : GPBMessage

@property (retain, nonatomic) UrlStructV2 *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) int position;
@property (nonatomic) BOOL hasPosition;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;

+ (id)descriptor;

@end
