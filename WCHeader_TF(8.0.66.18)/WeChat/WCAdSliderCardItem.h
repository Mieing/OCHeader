@class NSString, WCAdCardBtnInfo, WCAdSliderCardButton;

@interface WCAdSliderCardItem : WCAdSliderCardBaseItem <NSCoding>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned int markMaxAlpha;
@property (retain, nonatomic) NSString *backBorderImage;
@property (retain, nonatomic) NSString *frontBorderImage;
@property (retain, nonatomic) WCAdCardBtnInfo *clickActionInfo;
@property (retain, nonatomic) WCAdSliderCardButton *buttonInfo;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)fetchCardAdLogoType;
- (void).cxx_destruct;

@end
