@class NSString, NSDate;

@interface IESLLPOIGoodsDetailCollectGuideRecordManager : NSObject

@property (copy, nonatomic) NSString *lastActivityID;
@property (copy, nonatomic) NSString *lastPoiSessionID;
@property (copy, nonatomic) NSString *lastPoiEnterId;
@property (nonatomic) long long repeatShowTime;
@property (nonatomic) long long multiShowTime;
@property (nonatomic) long long theSamePoiShowTimes;
@property (retain, nonatomic) NSDate *userGuideShowDate;

- (void).cxx_destruct;

@end
