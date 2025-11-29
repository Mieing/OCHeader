@class UIImage, NSString;

@interface WCFinderFeedFlowViewTipsConfig : NSObject

@property (nonatomic) unsigned long long styleFlag;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) NSString *tipsText;
@property (retain, nonatomic) NSString *endText;
@property (retain, nonatomic) NSString *endBtnText;

+ (id)defaultConfigOfHeaderViewInState:(unsigned long long)a0;
+ (id)defaultConfigOfEmptyTipsViewInState:(unsigned long long)a0;
+ (id)defaultConfigOfFooterViewInState:(unsigned long long)a0;
+ (unsigned long long)convertFeedFlowViewStateToEmptyTipsViewState:(unsigned long long)a0;

- (id)initWithTipsType:(unsigned long long)a0 inState:(unsigned long long)a1;
- (void).cxx_destruct;

@end
