@class NSString, NSMutableArray, NSData;

@interface WCVideoFlowInfo : NSObject <NSCoding, PBCoding, PBCoderNSCodingBridge>

@property (retain, nonatomic) NSString *vid;
@property (retain, nonatomic) NSString *expand;
@property (retain, nonatomic) NSString *searchId;
@property (retain, nonatomic) NSString *openId;
@property (nonatomic) unsigned int category;
@property (retain, nonatomic) NSString *shareUrl;
@property (retain, nonatomic) NSString *shareTitle;
@property (retain, nonatomic) NSString *shareDesc;
@property (retain, nonatomic) NSString *shareImgUrl;
@property (retain, nonatomic) NSString *source;
@property (retain, nonatomic) NSString *sourceImgUrl;
@property (retain, nonatomic) NSString *sourceUrl;
@property (retain, nonatomic) NSString *strPlayCount;
@property (nonatomic) unsigned int playCount;
@property (retain, nonatomic) NSString *titleUrl;
@property (retain, nonatomic) NSString *nsTagInfoJSON;
@property (nonatomic) BOOL isMiniVideo;
@property (nonatomic) unsigned int realShareCategory;
@property (retain, nonatomic) NSString *videoChannelTitle;
@property (retain, nonatomic) NSString *bizUserName;
@property (nonatomic) long long sourceJumpType;
@property (retain, nonatomic) NSMutableArray *extParams;
@property (retain, nonatomic) NSData *extParamsNSCodingData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_vid;
+ (void)PBArrayAdd_expand;
+ (void)PBArrayAdd_searchId;
+ (void)PBArrayAdd_openId;
+ (void)PBArrayAdd_category;
+ (void)PBArrayAdd_shareUrl;
+ (void)PBArrayAdd_shareTitle;
+ (void)PBArrayAdd_shareDesc;
+ (void)PBArrayAdd_shareImgUrl;
+ (void)PBArrayAdd_source;
+ (void)PBArrayAdd_sourceImgUrl;
+ (void)PBArrayAdd_sourceUrl;
+ (void)PBArrayAdd_strPlayCount;
+ (void)PBArrayAdd_playCount;
+ (void)PBArrayAdd_titleUrl;
+ (void)PBArrayAdd_extParamsNSCodingData;
+ (void)PBArrayAdd_nsTagInfoJSON;
+ (void)PBArrayAdd_isMiniVideo;
+ (void)PBArrayAdd_realShareCategory;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)beforePBCoderProcess;
- (void)afterPBCoderProcess;
- (void).cxx_destruct;

@end
