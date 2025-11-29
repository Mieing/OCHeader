@class NSString, AWEAwemeModel;

@interface AWEHeaderGameCPViewAnchorModel : AWEGeneralViewAnchorModel {
    AWEAwemeModel *_model;
    NSString *_openURL;
    NSString *_title;
    NSString *_titleTag;
}

- (id)titleTag;
- (void)setOpenURL:(id)a0;
- (void)setTitleTag:(id)a0;
- (id)model;
- (id)initWithModel:(id)a0;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)title;
- (id)openURL;
- (void)initData;

@end
