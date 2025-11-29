@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenActivityAlbumInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *albumId;
@property (copy, nonatomic) NSString *albumName;
@property (copy, nonatomic) NSString *activityId;
@property (retain, nonatomic) AWECodeGenUrlModel *coverImgModel;
@property (nonatomic) BOOL isParticipatedActivity;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
