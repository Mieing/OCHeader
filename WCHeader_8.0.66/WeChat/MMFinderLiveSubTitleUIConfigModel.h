@class TextStyleAttributeObj, UIFont;

@interface MMFinderLiveSubTitleUIConfigModel : NSObject

@property (nonatomic) double maxContentWidth;
@property (nonatomic) unsigned long long chnMaxLine;
@property (nonatomic) unsigned long long engMaxLine;
@property (retain, nonatomic) TextStyleAttributeObj *chnTextAttributeObj;
@property (retain, nonatomic) TextStyleAttributeObj *engTextAttributeObj;
@property (retain, nonatomic) UIFont *chnSubTitleFont;
@property (retain, nonatomic) UIFont *engSubTitleFont;
@property (readonly, nonatomic) unsigned long long chnTextLine;
@property (readonly, nonatomic) unsigned long long engTextLine;
@property (nonatomic) unsigned long long chnDisplayMode;
@property (nonatomic) unsigned long long engDisplayMode;

+ (unsigned long long)getFinalLinesWithMaxLine:(unsigned long long)a0 supportStable:(BOOL)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
