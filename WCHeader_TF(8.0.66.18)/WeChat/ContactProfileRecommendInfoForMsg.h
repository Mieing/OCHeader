@class NSString;

@interface ContactProfileRecommendInfoForMsg : NSObject

@property (retain, nonatomic) NSString *profileRemark;
@property (retain, nonatomic) NSString *profilePhone;
@property (nonatomic) unsigned int firstImageMsgLocalId;
@property (nonatomic) unsigned int remarkType;
@property (nonatomic) unsigned int remarkCandidateSourceType;
@property (nonatomic) unsigned int phoneCandidateSourceType;
@property (nonatomic) unsigned int imageCandidateSourceType;

- (void).cxx_destruct;

@end
