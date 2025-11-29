@class NSString;

@interface AWEStudioFollowShootNodeModel : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *hashTagNameList;
@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSString *propList;

- (void)clearAllInfo;
- (BOOL)isNullNode;
- (void).cxx_destruct;

@end
