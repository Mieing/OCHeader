@class NSString;

@interface WCFinderPostTemplateCommentParams : NSObject

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *feedId;
@property (copy, nonatomic) NSString *feedNonceId;
@property (copy, nonatomic) NSString *refFeedId;
@property (nonatomic) int type;

- (id)init;
- (void).cxx_destruct;

@end
