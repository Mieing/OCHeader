@class NSString, NSArray;

@interface ACCStickerPannelCommonRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSString *uploadURI;
@property (copy, nonatomic) NSString *versionCode;
@property (copy, nonatomic) NSString *creationId;
@property (copy, nonatomic) NSString *panelName;
@property (copy, nonatomic) NSArray *filterTags;
@property (copy, nonatomic) NSString *categoryKey;
@property (copy, nonatomic) NSString *categoryId;
@property (nonatomic) BOOL isRecommend;
@property (nonatomic) unsigned long long pageCount;
@property (nonatomic) unsigned long long cursor;
@property (nonatomic) unsigned long long sortingPosition;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
