@class UIFont;

@interface IESLiveMultiKTVMidiTagViewConfig : NSObject

@property (nonatomic) long long style;
@property (nonatomic) double height;
@property (nonatomic) double borderWidth;
@property (nonatomic) double iconWidth;
@property (retain, nonatomic) UIFont *textFont;
@property (nonatomic) double iconLeftOffset;
@property (nonatomic) double textLeftOffset;
@property (nonatomic) double textRightOffset;

- (id)initWithTagViewStyle:(long long)a0;
- (void).cxx_destruct;

@end
