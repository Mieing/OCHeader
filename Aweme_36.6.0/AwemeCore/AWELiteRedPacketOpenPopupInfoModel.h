@class NSString;

@interface AWELiteRedPacketOpenPopupInfoModel : AWELiteBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *mainButtonText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
