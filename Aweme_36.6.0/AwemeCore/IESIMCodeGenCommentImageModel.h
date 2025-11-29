@class NSDictionary, IESIMCodeGenUrlModel;

@interface IESIMCodeGenCommentImageModel : AWEBaseDataModel

@property (retain, nonatomic) IESIMCodeGenUrlModel *originUrlModel;
@property (retain, nonatomic) IESIMCodeGenUrlModel *cropUrlModel;
@property (nonatomic) BOOL isLive;
@property (copy, nonatomic) NSDictionary *liveVideo;
@property (retain, nonatomic) IESIMCodeGenUrlModel *mediumUrlModel;
@property (retain, nonatomic) IESIMCodeGenUrlModel *downloadUrlModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
