@class AWECommentTemplateCellAttachNoticeTagConfig, AWECommentTemplateCellAttachNoticeItemModel;

@interface AWECommentTemplateCellAttachNoticeModel : NSObject

@property (nonatomic) BOOL needPublishLabel;
@property (nonatomic) unsigned long long textExpandPosition;
@property (retain, nonatomic) AWECommentTemplateCellAttachNoticeTagConfig *tagConfig;
@property (retain, nonatomic) AWECommentTemplateCellAttachNoticeItemModel *itemModel;

- (void).cxx_destruct;

@end
