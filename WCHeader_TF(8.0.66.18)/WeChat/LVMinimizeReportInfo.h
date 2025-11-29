@class NSString, NSDictionary, NSDate;

@interface LVMinimizeReportInfo : NSObject

@property (copy, nonatomic) NSString *sourceContextId;
@property (copy, nonatomic) NSString *sourceTabContextId;
@property (nonatomic) long long sourceCommentScene;
@property (copy, nonatomic) NSDictionary *sourceExtraParams;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSString *playSessionId;
@property (nonatomic) double skipRealPlayTime;

- (void).cxx_destruct;

@end
