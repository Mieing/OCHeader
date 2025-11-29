@class NSString;
@protocol MMLiveKtvThemeItemFetching;

@interface MMLiveKtvThemeItemFetchRequest : NSObject

@property (retain, nonatomic) NSString *themeId;
@property (retain, nonatomic) id<MMLiveKtvThemeItemFetching> fetchingProvider;

- (void).cxx_destruct;

@end
