@class HTSLiveText, NSString, HTSLiveImage, NSMutableArray;

@interface ActivityUser : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *activityName;
@property (retain, nonatomic) HTSLiveText *displayTabText;
@property (nonatomic) BOOL hasDisplayTabText;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *userIdStr;
@property (retain, nonatomic) NSMutableArray *labelsArray;
@property (readonly, nonatomic) unsigned long long labelsArray_Count;
@property (copy, nonatomic) NSString *subTabText;
@property (nonatomic) BOOL isValid;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) HTSLiveImage *buttonImage;
@property (nonatomic) BOOL hasButtonImage;
@property (retain, nonatomic) NSMutableArray *backGroundImagesArray;
@property (readonly, nonatomic) unsigned long long backGroundImagesArray_Count;
@property (copy, nonatomic) NSString *userOpenIdStr;

+ (id)descriptor;

@end
