@class NSString, UILabel, NSMutableArray, UIButton;

@interface ACCAlbumEnhanceMultiSelectionBottomView : UIView <ACCSelectedAssetsBottomViewProtocol>

@property (retain, nonatomic) NSMutableArray *buttonList;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL doAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateStateWith:(BOOL)a0;
- (void)updateLayoutConstaint;
- (void).cxx_destruct;
- (id)init;
- (void)addButton:(id)a0;
- (void)removeButton:(id)a0;

@end
