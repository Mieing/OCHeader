@class NSString;

@interface GameGeneralStatObject : NSObject

@property (nonatomic) unsigned int opId;
@property (nonatomic) unsigned int processTime;
@property (nonatomic) int errorCode;
@property (retain, nonatomic) NSString *errorDesc;
@property (nonatomic) unsigned int sceneId;

- (id)init;
- (id)getReportStr;
- (void).cxx_destruct;

@end
