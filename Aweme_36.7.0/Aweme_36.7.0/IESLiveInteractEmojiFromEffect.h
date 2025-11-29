@class NSString, HTSLiveImage, NSNumber;

@interface IESLiveInteractEmojiFromEffect : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } renderRect;
@property (nonatomic) struct CGSize { double width; double height; } effectSize;
@property (nonatomic) double randomTimestamp;
@property (nonatomic) long long multiSendEffectLevel;
@property (copy, nonatomic) NSString *flymicType;
@property (nonatomic) BOOL isSendBySelf;
@property (copy, nonatomic) NSString *fromUserID;
@property (nonatomic) long long giftId;
@property (nonatomic) int giftType;
@property (copy, nonatomic) NSString *giftName;
@property (nonatomic) long long primaryEffectId;
@property (retain, nonatomic) HTSLiveImage *trayDynamicImage;
@property (nonatomic) BOOL shouleShowTrayImage;
@property (retain, nonatomic) NSNumber *defaultAngle;

- (void).cxx_destruct;

@end
