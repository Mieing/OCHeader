@interface ACCVideoEditStickerTabUIConfig : NSObject

@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long numberOfColumnsInRow;
@property (nonatomic) double horizonalInset;
@property (nonatomic) double horizonalGap;
@property (nonatomic) double verticalGap;
@property (nonatomic) double itemRatio;

- (void)configFourColumns;
- (void)configFiveColumns;
- (id)initWithStyle:(unsigned long long)a0;

@end
