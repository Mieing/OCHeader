@class NSDictionary, NSAttributedString;

@interface AWEIMFansGroupDisturbMessage : AWEIMMessage

@property (nonatomic) BOOL isMuteByAB;
@property (retain, nonatomic) NSAttributedString *titleAttributedString;
@property (nonatomic) struct CGSize { double width; double height; } titleSize;
@property (retain, nonatomic) NSDictionary *titleAttributes;
@property (retain, nonatomic) NSAttributedString *contentAttributedString;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) NSDictionary *contentAttributes;
@property (retain, nonatomic) NSAttributedString *disturbAttributedString;
@property (nonatomic) struct CGSize { double width; double height; } disturbSize;
@property (retain, nonatomic) NSDictionary *disturbAttributes;
@property (copy, nonatomic) id /* block */ moreButtonClickBlock;

- (id)initWithContentDict:(id)a0;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (BOOL)supportRefactorCell;
- (double)bubbleMaxWidth;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (long long)templateType;

@end
