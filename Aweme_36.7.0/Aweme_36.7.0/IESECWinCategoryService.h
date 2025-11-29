@class NSArray, NSString, UIView, NSIndexPath, IESECWinContext;

@interface IESECWinCategoryService : NSObject <IESECWinCategoryService> {
    IESECWinContext *_context;
}

@property (retain, nonatomic) NSArray *categoryList;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (copy, nonatomic) NSString *selectedCategoryName;
@property (copy, nonatomic) NSString *selectedCategoryIDs;
@property (retain, nonatomic) NSArray *subCategoryList;
@property (retain, nonatomic) NSIndexPath *selectedSubCategoryIndexPath;
@property (copy, nonatomic) NSString *selectedSubCategoryName;
@property (copy, nonatomic) NSString *selectedSubCategoryIDs;
@property (nonatomic) long long goodsStickyArea;
@property (readonly, nonatomic) BOOL needShowGuideBubble;
@property (nonatomic) BOOL showGuideBubble;
@property (weak, nonatomic) UIView *targetView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLiveHotGuideBubbleShowed;
- (void)updateSelectCategoryWithCategoryIDs:(id)a0 subCategoryIDs:(id)a1;
- (void)getLiveHotGuideBubbleShouldShow;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
