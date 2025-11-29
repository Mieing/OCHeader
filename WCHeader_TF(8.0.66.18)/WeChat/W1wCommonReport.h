@class NSString;

@interface W1wCommonReport : NSObject

@property (nonatomic) int scene;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *sceneNote;
@property (retain, nonatomic) NSString *extInfo;

+ (id)commonReportWithDict:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end
