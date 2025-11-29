@class AWECodeGenV1CommentTranslateResponse, AWECodeGenCommentTranslateConfigModel;

@interface AWECommentTranslateModel : NSObject

@property (nonatomic) BOOL isShowingTranslateButton;
@property (nonatomic) BOOL needShowTranslateInfo;
@property (nonatomic) unsigned long long translateState;
@property (nonatomic) BOOL shouldShowTranslateTips;
@property (retain, nonatomic) AWECodeGenCommentTranslateConfigModel *translateConfigModel;
@property (retain, nonatomic) AWECodeGenV1CommentTranslateResponse *translateResponseModel;

- (void).cxx_destruct;

@end
