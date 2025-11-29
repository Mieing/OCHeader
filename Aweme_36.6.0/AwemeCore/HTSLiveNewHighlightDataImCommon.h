@class HTSLiveText, NSString, HTSLiveNewPinCommon, HTSLiveNewPictureTextStyle;

@interface HTSLiveNewHighlightDataImCommon : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *scene;
@property (nonatomic) long long pinId;
@property (nonatomic) long long msgId;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (retain, nonatomic) HTSLiveNewPictureTextStyle *pictureTextStyle;
@property (nonatomic) BOOL hasPictureTextStyle;
@property (retain, nonatomic) HTSLiveNewPinCommon *pinCommon;
@property (nonatomic) BOOL hasPinCommon;

+ (id)descriptor;

@end
