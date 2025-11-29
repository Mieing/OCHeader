@class NSString, NSDictionary;

@interface IESECMallFeedRequestDataEventParams : NSObject

@property (copy, nonatomic) NSString *eventID;
@property (nonatomic) double dataTimeoutInterval;
@property (retain, nonatomic) NSDictionary *requestParamDict;

- (void).cxx_destruct;

@end
