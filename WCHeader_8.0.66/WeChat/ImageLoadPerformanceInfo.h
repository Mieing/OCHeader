@class NSNumber, NSString;

@interface ImageLoadPerformanceInfo : NSObject

@property (retain, nonatomic) NSNumber *isNetwork;
@property (retain, nonatomic) NSNumber *startTimeStamp;
@property (retain, nonatomic) NSNumber *endTimeStamp;
@property (retain, nonatomic) NSNumber *downloadFail;
@property (retain, nonatomic) NSNumber *downloadErrorCode;
@property (retain, nonatomic) NSNumber *decodeFail;
@property (copy, nonatomic) NSString *url;

+ (id)makeWithIsNetwork:(id)a0 startTimeStamp:(id)a1 endTimeStamp:(id)a2 downloadFail:(id)a3 downloadErrorCode:(id)a4 decodeFail:(id)a5 url:(id)a6;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
