@class IESECListKitPriceData, IESECListKitLayoutInfo, NSString, IESECListKitMaskInfo, IESECListKitTextInfo, NSNumber;

@interface IESECListKitElementInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECListKitLayoutInfo *authorInfoLayout;
@property (retain, nonatomic) IESECListKitLayoutInfo *avatarInfoLayout;
@property (retain, nonatomic) IESECListKitTextInfo *userTextStyle;
@property (retain, nonatomic) IESECListKitLayoutInfo *logoIconLayout;
@property (retain, nonatomic) IESECListKitTextInfo *logoTextStyle;
@property (retain, nonatomic) IESECListKitLayoutInfo *logoTextLayout;
@property (retain, nonatomic) IESECListKitLayoutInfo *videoTextLayout;
@property (retain, nonatomic) IESECListKitTextInfo *videoTextStyle;
@property (retain, nonatomic) IESECListKitLayoutInfo *hotIconLayout;
@property (retain, nonatomic) IESECListKitTextInfo *hotTextStyle;
@property (retain, nonatomic) IESECListKitLayoutInfo *arriveTimeIconLayout;
@property (retain, nonatomic) IESECListKitTextInfo *arriveTimeTextStyle;
@property (retain, nonatomic) IESECListKitMaskInfo *maskStyle;
@property (retain, nonatomic) IESECListKitLayoutInfo *adLogoLayout;
@property (retain, nonatomic) IESECListKitTextInfo *adLogoTextStyle;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) IESECListKitMaskInfo *viewStyle;
@property (retain, nonatomic) IESECListKitMaskInfo *avatarImageMaskViewStyle;
@property (retain, nonatomic) IESECListKitMaskInfo *hotIconStyle;
@property (nonatomic) BOOL darkModeEnable;
@property (retain, nonatomic) IESECListKitPriceData *descPrice;
@property (retain, nonatomic) IESECListKitLayoutInfo *redpackLayout;
@property (retain, nonatomic) IESECListKitTextInfo *liveHeaderStateStyle;
@property (retain, nonatomic) IESECListKitLayoutInfo *liveHeaderEnterIconLayout;
@property (retain, nonatomic) IESECListKitLayoutInfo *roomTitleLayout;
@property (retain, nonatomic) IESECListKitTextInfo *roomTitleStyle;
@property (retain, nonatomic) IESECListKitLayoutInfo *userTextLayout;
@property (retain, nonatomic) IESECListKitLayoutInfo *coinLayout;
@property (retain, nonatomic) IESECListKitTextInfo *coinTextStyle;
@property (retain, nonatomic) IESECListKitLayoutInfo *coinIconLayout;
@property (retain, nonatomic) IESECListKitLayoutInfo *arriveTimeTextLayout;
@property (retain, nonatomic) IESECListKitLayoutInfo *feedbackButtonLayout;
@property (retain, nonatomic) IESECListKitMaskInfo *playerMaskStyle;
@property (retain, nonatomic) IESECListKitLayoutInfo *playerLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
