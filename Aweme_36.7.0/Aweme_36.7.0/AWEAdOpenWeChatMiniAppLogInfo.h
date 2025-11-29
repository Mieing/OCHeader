@class NSString, NSDictionary, NSNumber, AWEOriginalAdModel;

@interface AWEAdOpenWeChatMiniAppLogInfo : NSObject

@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *adEventName;
@property (retain, nonatomic) NSNumber *creativeID;
@property (retain, nonatomic) NSNumber *adID;
@property (retain, nonatomic) NSDictionary *adExtraData;
@property (copy, nonatomic) NSString *refer;
@property (nonatomic) BOOL isFromAdLandingPage;
@property (retain, nonatomic) AWEOriginalAdModel *adModel;

+ (id)createLogInfoWithAdModel:(id)a0 adEventName:(id)a1 refer:(id)a2 adExtraData:(id)a3;

- (void).cxx_destruct;

@end
