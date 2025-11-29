@interface ACCToolBarCommonViewLayout : NSObject

@property (nonatomic) double itemSpacing;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) double moreButtonSpacing;
@property (nonatomic) struct CGSize { double width; double height; } moreButtonSize;
@property (nonatomic) double bottomSpacing;
@property (nonatomic) unsigned long long direction;

@end
