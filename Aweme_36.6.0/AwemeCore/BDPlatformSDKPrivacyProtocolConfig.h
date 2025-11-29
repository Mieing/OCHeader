@class UIColor, NSString, NSArray, NSAttributedString;

@interface BDPlatformSDKPrivacyProtocolConfig : NSObject

@property (copy, nonatomic) NSString *contentText;
@property (copy, nonatomic) NSArray *protocolRanges;
@property (copy, nonatomic) NSArray *protocolUrls;
@property (retain, nonatomic) UIColor *noticeTextColor;
@property (retain, nonatomic) UIColor *protocolTextColor;
@property (nonatomic) double noticeTextSize;
@property (nonatomic) double protocolTextSize;
@property (nonatomic) double bottomMargin;
@property (copy, nonatomic) id /* block */ privacyProtocolClickBlock;
@property (retain, nonatomic) NSAttributedString *constomAttributeText;

- (void).cxx_destruct;

@end
