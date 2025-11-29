@class AWESearchGeneralDCAutoPlayCalculator;
@protocol AWEMSearchAutoPlayCard;

@interface AWESearchGeneralDCAutoPlayCardInfo : NSObject

@property (weak, nonatomic) id<AWEMSearchAutoPlayCard> card;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } realRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } activeRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inactiveRect;
@property (nonatomic) long long colume;
@property (weak, nonatomic) AWESearchGeneralDCAutoPlayCalculator *calculator;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
