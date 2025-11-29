@class NSArray, NSString;

@interface AWEEffectCaptionPublishInfo : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *captions;
@property (copy, nonatomic) NSString *templateEffectId;
@property (copy, nonatomic) NSString *fontEffectId;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) long long style;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) struct CGPoint { double x; double y; } anchor;

+ (id)originalCaptionInfo:(id)a0;
+ (id)modelPropertyBlacklist;
+ (id)modelCustomPropertyMapper;
+ (id)captionInfoForExport:(id)a0;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (BOOL)modelCustomTransformToDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)diff:(id)a0;

@end
