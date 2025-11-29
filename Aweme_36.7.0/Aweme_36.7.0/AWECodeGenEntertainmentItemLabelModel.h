@class NSString, AWECodeGenEntertainmentRightLabelModel;

@interface AWECodeGenEntertainmentItemLabelModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *backgroudColor;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) long long position;
@property (retain, nonatomic) AWECodeGenEntertainmentRightLabelModel *rightLabelModel;
@property (copy, nonatomic) NSString *backGroundColor;
@property (copy, nonatomic) NSString *backgroundColor;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
