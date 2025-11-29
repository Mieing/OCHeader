@class UIFont, NSArray, NSMutableDictionary, NSString, CECMomentTextAreaStringLengthLimit;

@interface CECMomentTextAreaFontStepIncreaseRule : NSObject <CECMomentTextAreaFontRule>

@property (retain, nonatomic) NSArray *steps;
@property (retain, nonatomic) NSArray *fontSizes;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) CECMomentTextAreaStringLengthLimit *lengthLimit;
@property (retain, nonatomic) NSMutableDictionary *fontCacheForSizeIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fontFor:(id)a0;
- (id)initWithSteps:(id)a0 fontSizes:(id)a1 font:(id)a2;
- (void).cxx_destruct;

@end
