@class NSNumber, NSString;

@interface TTACheckUserInfoCanModifyModel : NSObject

@property (retain, nonatomic) NSNumber *errorCode;
@property (retain, nonatomic) NSString *descriptionMsg;
@property (retain, nonatomic) NSNumber *show;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *avatarUrl;
@property (retain, nonatomic) NSNumber *isNameValid;
@property (retain, nonatomic) NSNumber *isAvatarValid;
@property (retain, nonatomic) NSNumber *isBackgroundValid;
@property (retain, nonatomic) NSNumber *isDescriptionValid;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *save;
@property (retain, nonatomic) NSString *tips;
@property (retain, nonatomic) NSNumber *hasShowTimes;

+ (id)tta_modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
