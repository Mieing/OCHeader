@class NSString, NSArray;

@interface AppmsgExposureItem : NSObject

@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *innerID;
@property (retain, nonatomic) NSString *chatName;
@property (retain, nonatomic) NSArray *urlInfoList;
@property (retain, nonatomic) NSString *sendUserName;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int currSessionID;

- (void).cxx_destruct;

@end
