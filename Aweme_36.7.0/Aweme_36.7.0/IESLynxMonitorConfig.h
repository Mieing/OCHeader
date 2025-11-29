@class NSString, NSDictionary;

@interface IESLynxMonitorConfig : NSObject

@property (copy, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSDictionary *commonParams;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic, getter=isOffline) BOOL offline;

+ (id)lynxVersion;

- (void).cxx_destruct;
- (id)init;

@end
