@class NSString;

@interface WeitoutiaoShareLinkRequest : WeitoutiaoShareBaseRequest

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL isVideo;
@property (copy, nonatomic) NSString *coverUrl;

- (void).cxx_destruct;
- (id)init;

@end
