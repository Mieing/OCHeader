@class AWEShareAwemeInfoModel, AWEShareAwemeTask, AWEAwemeModel;

@interface AWEShareAwemeConfiguration : AWEShareCommonConfiguration

@property (readonly, nonatomic) AWEShareAwemeTask *task;
@property (readonly, nonatomic) AWEAwemeModel *aweme;
@property (readonly, nonatomic) AWEShareAwemeInfoModel *awemeInfo;

@end
