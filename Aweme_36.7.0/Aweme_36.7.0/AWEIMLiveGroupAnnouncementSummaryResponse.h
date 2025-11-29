@class NSString, NSArray, AWEIMLiveGroupAnnouncementSampleInfo, AWEIMLiveGroupAnnouncementInfo;

@interface AWEIMLiveGroupAnnouncementSummaryResponse : AWEBaseApiModel

@property (nonatomic) unsigned long long announcementStatus;
@property (retain, nonatomic) AWEIMLiveGroupAnnouncementInfo *announcementInfo;
@property (retain, nonatomic) AWEIMLiveGroupAnnouncementSampleInfo *sampleInfo;
@property (copy, nonatomic) NSString *sendDesc;
@property (retain, nonatomic) NSArray *announcementInfoList;

+ (id)announcementInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
