@interface IESLiveGameSpecifyRatioSegmentedItem : NSObject

@property (readonly, nonatomic) unsigned long long type;

- (id)initWithGameSpecifyRatioType:(unsigned long long)a0;
- (id)getDisplayTitle;
- (id)getDisplayTips;
- (id)getDisplayImage;
- (unsigned long long)getNumberOfLines;
- (double)getDisplayFontSize;
- (struct CGSize { double x0; double x1; })getDisplaySize;
- (id)getSelectedTips;

@end
