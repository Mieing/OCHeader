@class NSString, UILabel, UIView, UIButton;

@interface CAKAlbumSearchBarTextFieldSearchAction : NSObject <DUXTextFieldContent>

@property (retain, nonatomic) UIButton *contentView;
@property (retain, nonatomic) UIView *splitView;
@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) id /* block */ didClickAction;
@property (nonatomic) struct CGSize { double width; double height; } actionSize;
@property (nonatomic) unsigned long long enlargeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithString:(id)a0 clickAction:(id /* block */)a1;
+ (id)actionWithString:(id)a0;

- (id)duxTextField_view;
- (void)didClickContentView;
- (void).cxx_destruct;

@end
