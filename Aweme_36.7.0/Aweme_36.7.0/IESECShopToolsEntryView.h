@class IESECShopToolsEntryModel;
@protocol IESECShopToolsEntryDelegate;

@interface IESECShopToolsEntryView : UIView {
    IESECShopToolsEntryModel *_model;
}

@property (weak, nonatomic) id<IESECShopToolsEntryDelegate> delegate;

- (void)didTapEntry;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupViews;

@end
