@class NSString, NSArray;
@protocol AWEStudioAwemeModelProtocol;

@interface AWEVideoPublishConfig : NSObject

@property (retain, nonatomic) id<AWEStudioAwemeModelProtocol> aweme;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *publishTitle;
@property (copy, nonatomic) NSArray *challenges;

- (void).cxx_destruct;

@end
