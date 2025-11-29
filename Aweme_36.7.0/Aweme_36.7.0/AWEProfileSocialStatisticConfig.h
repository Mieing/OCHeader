@class NSNumber, AWEProfileHeaderContext, NSString;

@interface AWEProfileSocialStatisticConfig : NSObject

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (retain, nonatomic) NSNumber *followingCount;
@property (retain, nonatomic) NSNumber *fansCount;
@property (retain, nonatomic) NSNumber *friendsCount;
@property (retain, nonatomic) NSNumber *praiseCount;
@property (nonatomic) BOOL canShowFriendsLabel;
@property (nonatomic) BOOL isLoaded;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL isCompanyUser;
@property (nonatomic) double containerWidth;
@property (copy, nonatomic) NSString *friendPrefixTitle;
@property (nonatomic) long long friendType;
@property (copy, nonatomic) NSString *fansCountStr;
@property (copy, nonatomic) NSString *praiseCountStr;
@property (nonatomic) BOOL hidePraise;

- (void).cxx_destruct;

@end
