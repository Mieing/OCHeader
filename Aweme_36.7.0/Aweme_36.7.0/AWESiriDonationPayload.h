@class AWESiriDonationBasicInfo, AWESiriDonationRequestParams, AWEPushContentSiriSuggestConfigModel, AWESiriDonationMultiplierInfo;

@interface AWESiriDonationPayload : NSObject

@property (readonly, nonatomic) AWESiriDonationBasicInfo *basicInfo;
@property (readonly, nonatomic) AWESiriDonationRequestParams *requestParams;
@property (retain, nonatomic) AWESiriDonationMultiplierInfo *multiplierInfo;
@property (retain, nonatomic) AWEPushContentSiriSuggestConfigModel *responseData;

- (id)initWithBasicInfo:(id)a0 requestParams:(id)a1;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
