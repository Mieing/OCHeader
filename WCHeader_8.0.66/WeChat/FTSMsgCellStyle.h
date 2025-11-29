@class UIColor;

@interface FTSMsgCellStyle : NSObject

@property (nonatomic) double cellHeight;
@property (nonatomic) double headImgLen;
@property (nonatomic) double displayNameMarginTop;
@property (nonatomic) double lineSpace;
@property (nonatomic) double displayNameFontSize;
@property (nonatomic) double detailTextFontSize;
@property (retain, nonatomic) UIColor *displayNameColor;
@property (retain, nonatomic) UIColor *detailTextColor;
@property (retain, nonatomic) UIColor *countTextColor;
@property (nonatomic) double iconNamePostfixSize;

- (void).cxx_destruct;

@end
