@class NSDictionary, AWECodeGenUrlModel;

@interface AWECodeGenCommentImageModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenUrlModel *originUrlModel;
@property (retain, nonatomic) AWECodeGenUrlModel *cropUrlModel;
@property (retain, nonatomic) AWECodeGenUrlModel *thumbUrlModel;
@property (retain, nonatomic) AWECodeGenUrlModel *mediumUrlModel;
@property (retain, nonatomic) AWECodeGenUrlModel *downloadUrlModel;
@property (copy, nonatomic) NSDictionary *liveVideo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
