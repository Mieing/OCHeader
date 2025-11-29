@class OMCSegment, NSString, NSArray, MJSegmentViewModel, OMJMaterialInfo, OMJMaterialManager, OMJID;

@interface MJMovieTextEditViewModel : NSObject <MJStyleEditViewModelDataSource>

@property (nonatomic) long long entranceType;
@property (nonatomic) long long editType;
@property (retain, nonatomic) NSString *placeholder;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *subText;
@property (retain, nonatomic) NSString *originalText;
@property (retain, nonatomic) NSString *originalSubText;
@property (retain, nonatomic) NSString *materialID;
@property (retain, nonatomic) NSArray *titleItems;
@property (retain, nonatomic) NSArray *contentItems;
@property (retain, nonatomic) OMCSegment *segment;
@property (retain, nonatomic) OMJMaterialManager *manager;
@property (nonatomic) unsigned long long scene;
@property (readonly, nonatomic) long long entrancePageIndex;
@property (readonly, nonatomic) OMJID *segmentID;
@property (retain, nonatomic) OMJID *contentDescBelongingID;
@property (retain, nonatomic) MJSegmentViewModel *segmentVM;
@property (nonatomic) BOOL hasChanges;
@property (readonly, nonatomic) BOOL hasTextChanges;
@property (retain, nonatomic) OMJMaterialInfo *defaultTitleMaterialInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEntranceType:(long long)a0 editType:(long long)a1 placeholder:(id)a2 text:(id)a3 subText:(id)a4 segment:(id)a5 segmentVM:(id)a6 materailManager:(id)a7 scene:(unsigned long long)a8 defaultTitleMaterialInfo:(id)a9;
- (void)dealloc;
- (void)fetchDatas;
- (long long)numberOfPages;
- (id)contentItemAtIndex:(long long)a0;
- (id)titleItemAtIndex:(long long)a0;
- (void)prepareTextSticker:(id /* block */)a0;
- (unsigned long long)cacheSegmentType;
- (void)updateSegmentVM:(id)a0;
- (void)updateText:(id)a0;
- (void)updateSubText:(id)a0;
- (void)updatePlaceholder:(id)a0;
- (id)undoTitle;
- (id)currentStyleEditingSegmentVM;
- (void).cxx_destruct;

@end
