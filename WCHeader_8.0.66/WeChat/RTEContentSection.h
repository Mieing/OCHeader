@class RTETextView;

@interface RTEContentSection : MMObject <NSCopying>

@property (nonatomic) unsigned long long length;
@property (nonatomic) double cellHeight;
@property (retain, nonatomic) RTETextView *cellView;
@property (nonatomic) unsigned long long numOfParagraph;

+ (id)creatSectionForString:(id)a0;
+ (id)creatSectionArrayForString:(id)a0;
+ (void)applyEditLocations:(id)a0 inSections:(id)a1 isAddParagraph:(BOOL)a2;
+ (unsigned int)sectionSeparateParagraghNum;
+ (unsigned int)sectionSeparateStringLength;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)tryMergeSection:(id)a0;
- (void)clearCacheView;
- (void).cxx_destruct;

@end
