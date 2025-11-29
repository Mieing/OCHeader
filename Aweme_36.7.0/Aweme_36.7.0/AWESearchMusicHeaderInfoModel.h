@class NSString, NSArray;

@interface AWESearchMusicHeaderInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *searchResultId;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isSortTab;
- (BOOL)isPlayAllTab;
- (void).cxx_destruct;

@end
