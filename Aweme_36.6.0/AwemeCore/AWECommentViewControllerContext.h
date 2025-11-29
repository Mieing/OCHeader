@class NSString;
@protocol AWECommentGeneralModelProtocol, AWECommentListViewControllerSettingProtocol;

@interface AWECommentViewControllerContext : AWEPageContext

@property (retain, nonatomic) id<AWECommentGeneralModelProtocol> data;
@property (nonatomic) BOOL isBGLight;
@property (nonatomic) BOOL isLandScape;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *accountType;
@property (weak, nonatomic) id<AWECommentListViewControllerSettingProtocol> setting;

- (void).cxx_destruct;

@end
