@class UIColor;

@interface AWEUserPickerConfig : NSObject

@property (nonatomic) unsigned long long style;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIColor *cellTitleColor;
@property (readonly, nonatomic) UIColor *cellEmptyColor;
@property (readonly, nonatomic) double tableContentTopInset;
@property (copy, nonatomic) id /* block */ containerViewHideBlock;

- (void).cxx_destruct;
- (id)initWithStyle:(unsigned long long)a0;

@end
