@class NSString, NSData;

@interface WASessionContentSendMsgInfo : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *imageURL;
@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int appVersion;
@property (nonatomic) unsigned int appType;

- (id)description;
- (void).cxx_destruct;

@end
