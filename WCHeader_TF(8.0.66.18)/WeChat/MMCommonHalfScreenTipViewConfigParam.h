@class NSString, UIButton, NSArray;

@interface MMCommonHalfScreenTipViewConfigParam : NSObject

@property (nonatomic) unsigned int m_viewConfigNavigationBarFlag;
@property (retain, nonatomic) NSString *titleViewWord;
@property (nonatomic) double titleViewTop;
@property (retain, nonatomic) NSString *descViewWord;
@property (retain, nonatomic) NSString *operateButtonTitle;
@property (nonatomic) double descContentViewTop;
@property (nonatomic) double descContentViewBottom;
@property (retain, nonatomic) UIButton *operateButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (nonatomic) double operateButtonBottom;
@property (nonatomic) long long titleViewTextAlignment;
@property (nonatomic) long long descViewTextAlignment;
@property (copy, nonatomic) id /* block */ operateBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (retain, nonatomic) NSArray *arrDescContentTitle;

- (id)init;
- (void).cxx_destruct;

@end
