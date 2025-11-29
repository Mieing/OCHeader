@class NSString;

@interface MMFinderLiveNewCustomGiftText : MMFinderLiveNewCustomGiftStyleObj <NSCopying>

@property (nonatomic) BOOL supportCustomText;
@property (nonatomic) unsigned int textLenLimit;
@property (nonatomic) double price;
@property (retain, nonatomic) NSString *customText;
@property (nonatomic) BOOL specificCustomText;
@property (retain, nonatomic) NSString *antispamCustomText;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *currDisplayText;
@property (copy, nonatomic) id /* block */ currDisplayTextChangeCallback;

+ (id)transferFromGiftTextPB:(id)a0 business:(id)a1;
+ (BOOL)isGiftTextPBValid:(id)a0 business:(id)a1;

- (id)styleName;
- (BOOL)updateDisplayText:(id)a0;
- (BOOL)isCurrentDisplayTextEqualToCustomizationConfig;
- (BOOL)synchronizeCurrentDisplayTextToCustomizationConfig;
- (BOOL)recoverCurrentDisplayTextFromCustomizationConfig;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
