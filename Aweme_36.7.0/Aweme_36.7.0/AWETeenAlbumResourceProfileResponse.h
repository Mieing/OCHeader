@class NSArray, NSString, AWEURLModel;

@interface AWETeenAlbumResourceProfileResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *albumList;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *introduction;
@property (retain, nonatomic) AWEURLModel *cover;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long cursor;
@property (copy, nonatomic) NSString *pageToken;

+ (id)coverJSONTransformer;
+ (id)albumListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
