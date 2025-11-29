@class NSString;

@interface IESIMGroupUpdateFailPopup : AWEBaseApiModel

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *confirmBtnText;
@property (retain, nonatomic) NSString *landingBtnText;
@property (retain, nonatomic) NSString *landingSchema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
