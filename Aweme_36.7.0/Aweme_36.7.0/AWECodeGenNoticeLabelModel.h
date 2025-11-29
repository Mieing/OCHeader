@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenNoticeLabelModel : AWEBaseDataModel

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) AWECodeGenUrlModel *iconModel;
@property (copy, nonatomic) NSString *labelTracking;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
