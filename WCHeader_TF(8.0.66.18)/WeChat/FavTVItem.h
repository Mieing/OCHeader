@class NSString;

@interface FavTVItem : FavoritesModel

@property (retain, nonatomic) NSString *tvTitle;
@property (retain, nonatomic) NSString *tvDesc;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *tvInfo;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
