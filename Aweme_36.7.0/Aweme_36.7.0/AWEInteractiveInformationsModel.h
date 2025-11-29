@class AWEAwemeModel;

@interface AWEInteractiveInformationsModel : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemodel;
@property (nonatomic) long long playCount;
@property (nonatomic) long long isEnterDetail;
@property (nonatomic) long long isAdClick;
@property (nonatomic) long long isLike;
@property (nonatomic) double currentPlayTime;
@property (nonatomic) double playPercent;
@property (nonatomic) BOOL hasConsume;

- (id)initWithAWEAwemeModel:(id)a0;
- (void).cxx_destruct;

@end
