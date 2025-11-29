@class NSString;

@interface AwemeAigcStructV2 : GPBMessage

@property (nonatomic) int isStickerAigc;
@property (nonatomic) BOOL hasIsStickerAigc;
@property (copy, nonatomic) NSString *originalStickerId;
@property (nonatomic) BOOL hasOriginalStickerId;
@property (copy, nonatomic) NSString *aigcStickerId;
@property (nonatomic) BOOL hasAigcStickerId;
@property (nonatomic) int aigcType;
@property (nonatomic) BOOL hasAigcType;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) BOOL hasSource;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end
