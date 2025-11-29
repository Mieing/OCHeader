@class NSString, AWEAdGQVideoInfoModel;

@interface TC21TaskVideoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *onlineVideoUrl;
@property (copy, nonatomic) NSString *onlineVideoCovers;
@property (nonatomic) long long countdownSeconds;
@property (nonatomic) long long showSponsorCard;
@property (nonatomic) long long showSponsorCardTiming;
@property (nonatomic) long long hideSponsorCardTiming;
@property (copy, nonatomic) NSString *sponsorCardPicture;
@property (copy, nonatomic) NSString *sponsorCardTitle;
@property (copy, nonatomic) NSString *sponsorCardDesc;
@property (copy, nonatomic) NSString *sponsorCardJumpUrl;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *taskToken;
@property (copy, nonatomic) NSString *sponsorName;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *taskName;
@property (copy, nonatomic) NSString *taskGroup;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEAdGQVideoInfoModel *commerceExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commerceExtraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
