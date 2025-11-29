@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenStickerRankingUserModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) AWECodeGenUrlModel *iconUrlModel;
@property (nonatomic) long long score;
@property (nonatomic) long long rank;
@property (nonatomic) long long itemId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
