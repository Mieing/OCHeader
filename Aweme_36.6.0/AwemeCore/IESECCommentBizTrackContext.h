@class NSString, IESECCommentDetailModel, IESECCommentMediaItemViewModel;

@interface IESECCommentBizTrackContext : NSObject

@property (nonatomic) long long dataType;
@property (copy, nonatomic) NSString *commentSwitchType;
@property (nonatomic) long long originCommentCount;
@property (retain, nonatomic) IESECCommentDetailModel *detailModel;
@property (retain, nonatomic) IESECCommentMediaItemViewModel *mediaModel;
@property (nonatomic) long long showNum;
@property (copy, nonatomic) NSString *userLevel;
@property (copy, nonatomic) NSString *commentIdx;
@property (nonatomic) long long commentRank;
@property (nonatomic) BOOL isWithSKU;
@property (nonatomic) BOOL showOneLineTag;
@property (copy, nonatomic) NSString *skuName;

- (void).cxx_destruct;

@end
