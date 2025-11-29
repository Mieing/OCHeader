@class OrderedDictionary, NSString, EmoticonBoardPageWrap;

@interface EmoticonBoardCrossSectionInfo : NSObject

@property (nonatomic) unsigned long long sectionIndex;
@property (retain, nonatomic) EmoticonBoardPageWrap *pageWrap;
@property (nonatomic) struct CGPoint { double x; double y; } offsetInFatherCollection;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (retain, nonatomic) OrderedDictionary *qqEmojiDictionary;
@property (retain, nonatomic) NSString *pidNeedScrollTo;
@property (nonatomic) BOOL shouldShowLoadingIfNeeded;

- (void).cxx_destruct;

@end
