@class MMUIImageView, NSString, UIView, MMUIButton, MMUILabel;

@interface MMFinderLiveSetQuickReplyFooterView : UITableViewHeaderFooterView <MMGrowTextViewDelegate, UITextViewDelegate> {
    id /* block */ _addButtonBlock;
    UIView *_addContentView;
}

@property (readonly, nonatomic) UIView *addContentView;
@property (retain, nonatomic) MMUIImageView *addImageView;
@property (retain, nonatomic) MMUILabel *addLabel;
@property (retain, nonatomic) MMUIButton *addButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (id)initWithReuseIdentifier:(id)a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)addButtonClick:(id)a0;
- (void)setAddButtonBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
