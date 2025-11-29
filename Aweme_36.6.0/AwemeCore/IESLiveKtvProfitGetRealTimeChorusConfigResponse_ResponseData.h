@class NSString, NSMutableDictionary;

@interface IESLiveKtvProfitGetRealTimeChorusConfigResponse_ResponseData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *homePageText;
@property (nonatomic) long long reportGap;
@property (retain, nonatomic) NSMutableDictionary *chorusExtra;
@property (readonly, nonatomic) unsigned long long chorusExtra_Count;

+ (id)descriptor;

@end
