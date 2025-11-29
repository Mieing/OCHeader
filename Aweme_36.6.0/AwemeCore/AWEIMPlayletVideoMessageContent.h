@class NSArray, NSString, AWEURLModel;

@interface AWEIMPlayletVideoMessageContent : AWEIMMessageContent

@property (retain, nonatomic) NSArray *videoCoverURLs;
@property (retain, nonatomic) NSArray *videoCoverItems;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (retain, nonatomic) NSString *playletVideoName;
@property (nonatomic) long long playCount;
@property (retain, nonatomic) NSString *playletVideoId;
@property (retain, nonatomic) NSString *authorID;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)contentDictionary;

@end
