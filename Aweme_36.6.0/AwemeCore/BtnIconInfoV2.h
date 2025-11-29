@class NSString, UrlStructV2;

@interface BtnIconInfoV2 : GPBMessage

@property (copy, nonatomic) NSString *iconId;
@property (nonatomic) BOOL hasIconId;
@property (retain, nonatomic) UrlStructV2 *iconURL;
@property (nonatomic) BOOL hasIconURL;
@property (nonatomic) int position;
@property (nonatomic) BOOL hasPosition;

+ (id)descriptor;

@end
