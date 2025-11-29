@class NSString, NSMutableArray;

@interface WCFinderFoldLayout : NSObject

@property (nonatomic) unsigned long long layoutType;
@property (retain, nonatomic) NSMutableArray *dataItems;
@property (copy, nonatomic) NSString *userName;
@property (nonatomic) unsigned long long totalCount;

+ (id)layoutWithFoldLayout:(id)a0;

- (id)initWithFoldLayout:(id)a0;
- (id)description;
- (id)title;
- (id)titleForScene:(unsigned long long)a0;
- (id)nickName;
- (void).cxx_destruct;

@end
