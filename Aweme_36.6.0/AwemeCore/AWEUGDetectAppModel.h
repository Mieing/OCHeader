@class NSString, NSDictionary;

@interface AWEUGDetectAppModel : NSObject

@property (nonatomic) double startTime;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *detectId;
@property (retain, nonatomic) NSString *pageName;
@property (retain, nonatomic) NSDictionary *logExtra;

- (void).cxx_destruct;

@end
