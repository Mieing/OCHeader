@class UIFont, NSString, NSDictionary, NSNumber;

@interface AWEMVChannelCardConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long rightTopType;
@property (nonatomic) long long descMaxLine;
@property (nonatomic) long long leftBottomInfoType;
@property (nonatomic) long long actionType;
@property (nonatomic) double avatarSizeLength;
@property (nonatomic) double leftIconHeight;
@property (retain, nonatomic) NSNumber *leftIconWidth;
@property (nonatomic) double iconSizeLength;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) double topMargin;
@property (nonatomic) double bottomMargin;
@property (retain, nonatomic) UIFont *descFont;
@property (retain, nonatomic) UIFont *subDescFont;
@property (retain, nonatomic) UIFont *emphasizeFont;
@property (retain, nonatomic) UIFont *actionBtnFont;
@property (nonatomic) BOOL isShowingDislikeMask;
@property (copy, nonatomic) NSDictionary *feedbackInfo;
@property (nonatomic) BOOL hasConfigUI;
@property (nonatomic) BOOL isBigCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
