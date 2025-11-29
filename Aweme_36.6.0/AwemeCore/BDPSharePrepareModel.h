@class NSString, NSDictionary, NSArray, UIImage;

@interface BDPSharePrepareModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *shareChannel;
@property (copy, nonatomic) NSString *imgURI;
@property (copy, nonatomic) NSString *linkTitle;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *from;
@property (copy, nonatomic) NSString *functionFrom;
@property (nonatomic) long long imMsgType;
@property (nonatomic) long long originalImMsgType;
@property (copy, nonatomic) NSArray *taskIds;
@property (nonatomic) BOOL fromPureShare;
@property (nonatomic) BOOL useGenerateImg;
@property (retain, nonatomic) UIImage *shareImage;
@property (nonatomic) BOOL notNeedUploadImage;
@property (retain, nonatomic) NSArray *blockShareChannels;

- (BOOL)isTalentUserAddMissionAnchor;
- (BOOL)isTalentUserPostMissionAnchor;
- (BOOL)isTalentUserAnchor;
- (void).cxx_destruct;
- (id)videoId;

@end
