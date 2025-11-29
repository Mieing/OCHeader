@class NSString, FavLocationItem, FavoritesItemDataField;

@interface WNTextAttachment : RTETextAttachment

@property (readonly, nonatomic) FavoritesItemDataField *favData;
@property (retain, nonatomic) NSString *objectId;
@property (retain, nonatomic) NSString *dataTitle;
@property (nonatomic) unsigned int headIndex;
@property (nonatomic) unsigned int listIndex;
@property (nonatomic) BOOL checked;
@property (retain, nonatomic) NSString *thumbPath;
@property (nonatomic) unsigned int thumbSize;
@property (retain, nonatomic) NSString *dataPath;
@property (nonatomic) unsigned long long dataSize;
@property (nonatomic) unsigned int dataDuration;
@property (nonatomic) BOOL isSmallImage;
@property (retain, nonatomic) NSString *dataFmt;
@property (retain, nonatomic) FavLocationItem *locationInfo;
@property (nonatomic) unsigned int voiceFmt;
@property (nonatomic) unsigned int audioOffsetMs;

- (void)configFrameWithWidth:(double)a0;
- (id)accessibilityLabel;

@end
