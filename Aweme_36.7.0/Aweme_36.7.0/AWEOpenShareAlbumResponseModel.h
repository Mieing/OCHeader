@class NSArray, NSString, NSNumber;

@interface AWEOpenShareAlbumResponseModel : AWEBaseApiModel <NSMutableCopying>

@property (nonatomic) BOOL isPrivate;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL showTips;
@property (nonatomic) long long errNo;
@property (nonatomic) long long maxCursor;
@property (nonatomic) long long minCursor;
@property (copy, nonatomic) NSArray *videoList;
@property (copy, nonatomic) NSString *tips;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *errMsg;
@property (nonatomic) long long lastSelectedCount;
@property (copy, nonatomic) NSNumber *canSelected;
@property (nonatomic) long long customMaxVideoCount;
@property (copy, nonatomic) NSArray *filterVideo;

+ (id)JSONKeyPathsByPropertyKey;

- (id)videoModelListWithCurSelectedCount:(long long)a0 maxSelectedCount:(long long)a1;
- (id)nonSelectVideoModelList;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
