@class NSString, NSArray, MMFinderLiveGiftCustomizationStyleItem;

@interface MMFinderLiveGiftCustomizationModel : NSObject

@property (retain, nonatomic) NSString *instanceId;
@property (retain, nonatomic) NSString *parentProductId;
@property (retain, nonatomic) NSArray *styles;
@property (nonatomic) BOOL textCustomizableForAnyStyle;
@property (nonatomic) unsigned long long customTextValidationPolicy;
@property (retain, nonatomic) MMFinderLiveGiftCustomizationStyleItem *currentStyle;
@property (nonatomic) BOOL hasCustomText;
@property (retain, nonatomic) NSString *customText;
@property (retain, nonatomic) NSString *displayCustomText;
@property (nonatomic) BOOL styleSet;
@property (retain, nonatomic) MMFinderLiveGiftCustomizationStyleItem *selectedStyle;
@property (retain, nonatomic) NSString *currentCustomText;
@property (readonly, nonatomic) NSString *currentCustomTextTrimmedToCurrentStyleLengthLimit;
@property (readonly, nonatomic) NSString *displayCustomTextTrimmedToCurrentStyleLengthLimit;

+ (id)customizationModelForFinderLiveGift:(id)a0 useStrictTextValidationPolicy:(BOOL)a1;

- (id)getCurrentStyleRelyOnSelected:(BOOL)a0;
- (void).cxx_destruct;

@end
