@class NSString;

@interface AWEStaticEffectCaptionShotInfo : NSObject

@property (copy, nonatomic) NSString *musicID;
@property (nonatomic) double roundTime;
@property (copy, nonatomic) NSString *templateEffectId;
@property (copy, nonatomic) NSString *fontEffectId;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) long long style;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (nonatomic) struct CGPoint { double x; double y; } anchor;
@property (nonatomic) long long createdBy;

+ (id)infoWithRecordShotInfo:(id)a0;
+ (id)infoWithEffectShotInfo:(id)a0;

- (void).cxx_destruct;

@end
