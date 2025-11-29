@class NSString, NSDictionary;

@interface AWETeenExtraParamModel : NSObject

@property (copy, nonatomic) NSString *enterPosition;
@property (copy, nonatomic) NSString *enterGroupID;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) long long enterMethod;
@property (copy, nonatomic) NSDictionary *penetrateParams;
@property (copy, nonatomic) NSString *tokenType;
@property (nonatomic) BOOL isCoverDynamic;
@property (nonatomic) BOOL fromJustSeen;
@property (nonatomic) BOOL isPrivateWorkFromRecorder;
@property (nonatomic) unsigned long long labelType;
@property (copy, nonatomic) NSString *albumEnterFrom;
@property (copy, nonatomic) NSString *searchMethod;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) long long landscapeType;
@property (copy, nonatomic) NSString *channelID;
@property (copy, nonatomic) NSString *channelName;
@property (nonatomic) BOOL isInTeenDetailFeed;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
