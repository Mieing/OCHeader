@class NSString;

@interface AWEPOIAlbumPageTabModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *tabName;
@property (nonatomic) long long tabType;
@property (retain, nonatomic) NSString *tabPageSymbol;
@property (retain, nonatomic) NSString *contentSchema;
@property (retain, nonatomic) NSString *itemIDList;
@property (nonatomic) long long tabStyleMode;

+ (id)tabTypeJSONTransformer;
+ (id)tabStyleModeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
