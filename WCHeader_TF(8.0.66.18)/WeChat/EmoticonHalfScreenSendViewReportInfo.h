@class NSString;

@interface EmoticonHalfScreenSendViewReportInfo : NSObject

@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long searchID;
@property (retain, nonatomic) NSString *sessionID;
@property (nonatomic) int emoticonScene;
@property (nonatomic) int addEmoticonSource;
@property (nonatomic) int emoticonEnterScene;
@property (retain, nonatomic) NSString *sdkRequestID;
@property (nonatomic) int hasRedDot;

- (id)init;
- (void).cxx_destruct;

@end
