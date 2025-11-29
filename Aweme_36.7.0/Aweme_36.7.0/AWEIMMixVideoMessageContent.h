@class NSArray, NSString, NSDictionary, AWEURLModel;

@interface AWEIMMixVideoMessageContent : AWEIMMessageContent

@property (retain, nonatomic) NSArray *videoCoverURLs;
@property (retain, nonatomic) NSArray *videoCoverItems;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (retain, nonatomic) NSString *mixVideoName;
@property (nonatomic) long long playCount;
@property (retain, nonatomic) NSString *mixVideoId;
@property (retain, nonatomic) NSString *authorID;
@property (nonatomic) long long mixType;
@property (retain, nonatomic) NSDictionary *mixExtra;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)contentDictionary;

@end
