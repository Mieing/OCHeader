@class NSString, HTSLiveNewPinCommon, HTSLiveNewPictureTextStyle;

@interface HTSLiveNewHighlightDataCommonPictureText : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *scene;
@property (nonatomic) long long pinId;
@property (copy, nonatomic) NSString *contentId;
@property (retain, nonatomic) HTSLiveNewPictureTextStyle *pictureTextStyle;
@property (nonatomic) BOOL hasPictureTextStyle;
@property (retain, nonatomic) HTSLiveNewPinCommon *pinCommon;
@property (nonatomic) BOOL hasPinCommon;

+ (id)descriptor;

@end
