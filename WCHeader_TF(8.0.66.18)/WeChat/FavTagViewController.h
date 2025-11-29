@class NSString, NSArray, FavoritesItem;
@protocol FavTagViewDelegate;

@interface FavTagViewController : TagViewController <FavTagEditViewDelegate, IFavoritesExt> {
    FavoritesItem *m_favItem;
    NSArray *m_arrFavItems;
    unsigned long long m_tagEditMode;
}

@property (weak, nonatomic) id<FavTagViewDelegate> m_delegate;
@property (nonatomic) int m_editSource;
@property (nonatomic) int editSourcePage;
@property (nonatomic) BOOL isFromToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFavItem:(id)a0;
- (id)initWithFavItems:(id)a0;
- (void)viewDidLoad;
- (void)editCancel;
- (void)editDone:(id)a0;
- (void).cxx_destruct;

@end
