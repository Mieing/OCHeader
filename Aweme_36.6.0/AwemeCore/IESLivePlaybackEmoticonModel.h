@class NSString, NSArray, UIImage, NSNumber;

@interface IESLivePlaybackEmoticonModel : IESLiveDynamicMTLModel

@property (copy, nonatomic) NSString *emoticonIcon;
@property (copy, nonatomic) NSString *emoticonTitle;
@property (copy, nonatomic) NSString *resourcePath;
@property (nonatomic) BOOL hide;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *emoticonID;
@property (copy, nonatomic) NSString *defaultEmoticonTitle;
@property (copy, nonatomic) NSArray *relatedWords;
@property (copy, nonatomic) NSArray *imageUrlList;
@property (retain, nonatomic) UIImage *cachedEmoticonImage;
@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *localPath;
@property (nonatomic) BOOL isCustom;
@property (copy, nonatomic) NSString *display_name;
@property (copy, nonatomic) NSString *animate_url;
@property (copy, nonatomic) NSString *static_url;
@property (copy, nonatomic) NSString *animate_uri;
@property (copy, nonatomic) NSString *static_uri;
@property (retain, nonatomic) NSString *static_type;
@property (retain, nonatomic) NSString *animate_type;

- (id)initWithDefaultEmoticonTitle:(id)a0 emoticonTitle:(id)a1;
- (id)mapEmotionJson;
- (void).cxx_destruct;
- (id)init;

@end
