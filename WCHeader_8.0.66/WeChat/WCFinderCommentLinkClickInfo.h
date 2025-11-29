@class NSString, WCFinderFeedContentVM, NSMutableDictionary;

@interface WCFinderCommentLinkClickInfo : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) NSMutableDictionary *userInfo;
@property (retain, nonatomic) NSString *url;

+ (id)infoFromTextLinkUrl:(id)a0;

- (void).cxx_destruct;

@end
