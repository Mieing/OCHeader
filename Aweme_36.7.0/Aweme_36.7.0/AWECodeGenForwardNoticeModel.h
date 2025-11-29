@class NSString, AWECodeGenUserModel, AWECodeGenAwemeModel, AWECodeGenUrlModel, AWECodeGenRelationDynamicLableModel, AWECodeGenIMStickerModel;

@interface AWECodeGenForwardNoticeModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWECodeGenAwemeModel *awemeModel;
@property (retain, nonatomic) AWECodeGenUserModel *fromUserModel;
@property (retain, nonatomic) AWECodeGenUrlModel *imageUrlModel;
@property (copy, nonatomic) NSString *forwardId;
@property (copy, nonatomic) NSString *labelText;
@property (nonatomic) int labelType;
@property (nonatomic) int status;
@property (retain, nonatomic) AWECodeGenRelationDynamicLableModel *relationLabelModel;
@property (retain, nonatomic) AWECodeGenIMStickerModel *stickerModel;
@property (copy, nonatomic) NSString *parentId;
@property (copy, nonatomic) NSString *labelTracking;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
