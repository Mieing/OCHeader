@class BDReaderConfig;

@interface AWESearchSynthesisNovelBookSettingConfig : NSObject

@property (retain, nonatomic) BDReaderConfig *readerConfig;
@property (nonatomic) unsigned long long backgroundType;
@property (nonatomic) double textFontSize;
@property (nonatomic) double titleFontSize;
@property (nonatomic) unsigned long long pageMode;
@property (nonatomic) double brightness;
@property (copy, nonatomic) id /* block */ layoutConfigPageInsetBlock;
@property (nonatomic) double marginBetweenTitleAndTop;

+ (double)safeAreaBottom;
+ (double)safeAreaTop;

- (id)defaultReaderConfig;
- (void).cxx_destruct;
- (id)init;
- (id)textColor;

@end
