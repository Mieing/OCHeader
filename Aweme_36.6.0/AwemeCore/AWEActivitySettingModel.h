@class NSString, NSArray, AWEWaterMarkSettingModel, AWEURLModel;

@interface AWEActivitySettingModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *activityName;
@property (nonatomic) BOOL inActivity;
@property (copy, nonatomic) NSArray *hashtagArray;
@property (retain, nonatomic) AWEURLModel *diggIconURL;
@property (retain, nonatomic) AWEURLModel *undiggIconURL;
@property (retain, nonatomic) AWEURLModel *commentIconURL;
@property (retain, nonatomic) AWEURLModel *shareIconURL;
@property (retain, nonatomic) AWEURLModel *shareTipIconURL;
@property (retain, nonatomic) AWEURLModel *shotIconURL;
@property (retain, nonatomic) AWEURLModel *shotClickIconURL;
@property (copy, nonatomic) NSArray *activityStickerIDArray;
@property (retain, nonatomic) AWEWaterMarkSettingModel *watermark;

+ (id)diggIconURLJSONTransformer;
+ (id)undiggIconURLJSONTransformer;
+ (id)shareIconURLJSONTransformer;
+ (id)shareTipIconURLJSONTransformer;
+ (id)watermarkJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
