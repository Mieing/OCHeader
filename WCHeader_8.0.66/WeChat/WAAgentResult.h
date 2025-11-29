@class NSString, UIImage;

@interface WAAgentResult : NSObject

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) UIImage *snapshotImage;
@property (retain, nonatomic) NSString *resultPagePath;

- (void).cxx_destruct;

@end
