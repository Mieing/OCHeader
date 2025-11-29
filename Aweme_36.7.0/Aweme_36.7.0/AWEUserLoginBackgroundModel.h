@class NSString, AWEUserContext;

@interface AWEUserLoginBackgroundModel : NSObject

@property (retain, nonatomic) AWEUserContext *context;
@property (retain, nonatomic) NSString *halfScreenBgUrl;
@property (retain, nonatomic) NSString *halfScreenThemeId;

- (id)initFullScreenModelWithUserContext:(id)a0;
- (id)initHalfScreenModelWithBgUrl:(id)a0 ThemeId:(id)a1;
- (void).cxx_destruct;

@end
