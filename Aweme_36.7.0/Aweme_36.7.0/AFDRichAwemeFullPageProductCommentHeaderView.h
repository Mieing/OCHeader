@class AFDRichAwemeProductCommentView, AFDRichAwemeFullPageContext, AWEAwemeModel;

@interface AFDRichAwemeFullPageProductCommentHeaderView : UIView

@property (retain, nonatomic) AFDRichAwemeProductCommentView *productCommentView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AFDRichAwemeFullPageContext *context;
@property (nonatomic) double height;

- (void)updateDataWithModel:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
