@class NSString, NSDictionary, AWEHPAttributeTextArrayModel;

@interface AWEHPLandingRollBackSettingsConfig : AWEBaseBizConfigModel

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) AWEHPAttributeTextArrayModel *tabText;
@property (copy, nonatomic) NSString *pageText;
@property (nonatomic) double fontSize;
@property (nonatomic) double iconSize;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSDictionary *bottomOffset;
@property (nonatomic) double autoFoldTime;
@property (nonatomic) double autoDismissTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
