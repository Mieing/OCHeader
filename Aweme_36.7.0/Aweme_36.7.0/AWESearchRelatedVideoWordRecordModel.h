@class NSString, AWEURLModel;

@interface AWESearchRelatedVideoWordRecordModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *groupID;
@property (nonatomic) long long wordsPosition;
@property (copy, nonatomic) NSString *wordsContent;
@property (copy, nonatomic) NSString *wordsSource;
@property (retain, nonatomic) AWEURLModel *wordsImage;
@property (nonatomic) BOOL forceUpdateRank;
@property (copy, nonatomic) NSString *productID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
