@class NSString, UIFont;

@interface MMFinderLiveFansGroupSignUIStateInfo : NSObject

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) long long uiStyle;
@property (nonatomic) long long uiMode;
@property (nonatomic) long long uiShape;
@property (retain, nonatomic) NSString *fansGroupText;
@property (nonatomic) unsigned long long fansGroupRank;
@property (nonatomic) BOOL autoAdjustWidth;
@property (nonatomic) BOOL autoAdjustHeight;
@property (nonatomic) BOOL isSuperfan;
@property (nonatomic) struct CGSize { double width; double height; } fanGroupIconSize;
@property (nonatomic) BOOL isFansGroupIconCenter;
@property (nonatomic) double fansGroupIconLeft;
@property (retain, nonatomic) UIFont *fanGroupTextFont;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
