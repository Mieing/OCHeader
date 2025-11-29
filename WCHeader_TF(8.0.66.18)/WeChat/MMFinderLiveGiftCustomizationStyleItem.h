@class NSString, UIColor, MMFinderLiveGiftCustomizationStyleItemResource;

@interface MMFinderLiveGiftCustomizationStyleItem : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) unsigned int basePrice;
@property (nonatomic) BOOL textCustomizable;
@property (nonatomic) unsigned long long customTextLength;
@property (nonatomic) unsigned int priceWithCustomText;
@property (retain, nonatomic) NSString *textCustomizationEntryLabel;
@property (retain, nonatomic) NSString *clearTextCustomizationLabel;
@property (retain, nonatomic) NSString *textCustomizationEditLabel;
@property (retain, nonatomic) MMFinderLiveGiftCustomizationStyleItemResource *portraitAnimation;
@property (retain, nonatomic) MMFinderLiveGiftCustomizationStyleItemResource *landscapeAnimation;
@property (retain, nonatomic) MMFinderLiveGiftCustomizationStyleItemResource *previewAnimation;
@property (retain, nonatomic) MMFinderLiveGiftCustomizationStyleItemResource *thumbnail;
@property (retain, nonatomic) MMFinderLiveGiftCustomizationStyleItemResource *portraitAnimationWithCustomText;
@property (retain, nonatomic) MMFinderLiveGiftCustomizationStyleItemResource *landscapeAnimationWithCustomText;
@property (retain, nonatomic) MMFinderLiveGiftCustomizationStyleItemResource *previewAnimationWithCustomText;
@property (retain, nonatomic) MMFinderLiveGiftCustomizationStyleItemResource *thumbnailWithCustomText;
@property (retain, nonatomic) MMFinderLiveGiftCustomizationStyleItemResource *textCustomizationPreview;

- (void).cxx_destruct;

@end
