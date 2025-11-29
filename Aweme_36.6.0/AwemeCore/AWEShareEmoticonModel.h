@protocol AWEIMEmoticonThemeModelProtocol, AWEIMEmoticonModelProtocol;

@interface AWEShareEmoticonModel : NSObject

@property (readonly, nonatomic) id<AWEIMEmoticonModelProtocol> emoticonModel;
@property (readonly, nonatomic) id<AWEIMEmoticonThemeModelProtocol> themeModel;

- (id)initWIthEmoticonModel:(id)a0 themeModel:(id)a1;
- (void).cxx_destruct;

@end
