@class NSArray, NSString;

@interface AWEIMTextMessageQuoteFeedVideoContent : NSObject

@property (nonatomic) unsigned long long realCoverHeight;
@property (nonatomic) unsigned long long realCcoverWidth;
@property (nonatomic) unsigned long long aweType;
@property (nonatomic) unsigned long long coverHeight;
@property (nonatomic) unsigned long long coverWidth;
@property (copy, nonatomic) NSArray *contentThumbUrlList;
@property (copy, nonatomic) NSString *contentThumbUri;
@property (copy, nonatomic) NSArray *coverUrlUrlList;
@property (copy, nonatomic) NSString *coverUrlUri;
@property (copy, nonatomic) NSString *contentName;
@property (copy, nonatomic) NSString *contentTitle;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *uid;
@property (nonatomic) BOOL isStory;

- (id)initWithContentDict:(id)a0;
- (void).cxx_destruct;

@end
