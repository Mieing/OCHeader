@class NSString, NSDictionary, NSNumber;

@interface AWEPaidStreamIAANetworkRequestParameter : NSObject

@property (copy, nonatomic) NSString *parentContentID;
@property (copy, nonatomic) NSString *contentID;
@property (copy, nonatomic) NSDictionary *requestExtraInfo;
@property (retain, nonatomic) NSNumber *currentEpisode;
@property (retain, nonatomic) NSNumber *timestampP;
@property (retain, nonatomic) NSNumber *rit;
@property (copy, nonatomic) NSString *creatorID;
@property (copy, nonatomic) NSString *adFrom;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *certificate;
@property (copy, nonatomic) NSString *spuId;
@property (copy, nonatomic) NSString *skuId;
@property (nonatomic) long long bizType;
@property (copy, nonatomic) NSString *recordID;

+ (id)requestParameterWithAuthConfig:(id)a0;

- (void).cxx_destruct;

@end
