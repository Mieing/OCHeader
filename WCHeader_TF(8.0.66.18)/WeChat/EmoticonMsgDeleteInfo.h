@class NSString;

@interface EmoticonMsgDeleteInfo : NSObject

@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *talker;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) BOOL isSender;

- (void).cxx_destruct;

@end
