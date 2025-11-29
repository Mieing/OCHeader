@class NSString, AWECommentTemplateCellTimeModel, AWECommentTemplateCellContentModel, AWECommentTemplateCellInteractionModel, AWECommentTemplateCellBasicInfoModel, AWECommentTemplateCellTagModel;

@interface AWECommentTemplateCellModel : NSObject

@property (readonly, copy, nonatomic) NSString *uuid;
@property (retain, nonatomic) AWECommentTemplateCellBasicInfoModel *basicInfo;
@property (retain, nonatomic) AWECommentTemplateCellContentModel *contentModel;
@property (retain, nonatomic) AWECommentTemplateCellContentModel *attachContentModel;
@property (retain, nonatomic) AWECommentTemplateCellTimeModel *publishInfoModel;
@property (retain, nonatomic) AWECommentTemplateCellInteractionModel *interactionModel;
@property (nonatomic) BOOL isSub;
@property (nonatomic) unsigned long long layoutStyle;
@property (nonatomic) BOOL needReplyLabel;
@property (retain, nonatomic) AWECommentTemplateCellTagModel *bottomTag;

- (void).cxx_destruct;
- (id)init;

@end
