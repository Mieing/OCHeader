@class NSNumber, NSString, NSDictionary;

@interface __RTVAWEIMEmoticonModel : NSObject <AWEIMEmoticonModelProtocol>

@property (retain, nonatomic) NSNumber *version;
@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *display_name;
@property (copy, nonatomic) NSString *animate_url;
@property (copy, nonatomic) NSString *static_url;
@property (retain, nonatomic) NSString *static_type;
@property (retain, nonatomic) NSString *animate_type;
@property (copy, nonatomic) NSDictionary *display_name_lang;
@property (copy, nonatomic) NSString *animate_uri;
@property (copy, nonatomic) NSString *static_uri;
@property (nonatomic) long long resourceType;
@property (nonatomic) long long originThemeStyle;
@property (copy, nonatomic) NSString *originUniqueId;
@property (retain, nonatomic) NSNumber *originPackageID;
@property (copy, nonatomic) NSString *sourceDescription;
@property (copy, nonatomic) NSString *sourceSchema;
@property (copy, nonatomic) NSString *activityDescription;
@property (copy, nonatomic) NSString *activitySchema;
@property (nonatomic) unsigned long long stickerType;
@property (copy, nonatomic) NSString *emoticonIcon;
@property (copy, nonatomic) NSString *emoticonTitle;
@property (nonatomic) BOOL hide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRTVEmoticon:(id)a0;
- (void).cxx_destruct;

@end
