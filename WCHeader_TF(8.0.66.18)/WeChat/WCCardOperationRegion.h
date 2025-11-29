@class NSString;

@interface WCCardOperationRegion : MMObject

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int endTime;
@property (retain, nonatomic) NSString *thumbUrl;

- (BOOL)operationAvalid;
- (void).cxx_destruct;

@end
