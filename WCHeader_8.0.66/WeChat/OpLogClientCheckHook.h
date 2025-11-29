@class NSString;

@interface OpLogClientCheckHook : WXPBGeneratedMessage

@property (nonatomic) unsigned int seq;
@property (retain, nonatomic) NSString *fileList;
@property (nonatomic) int isRoot;
@property (nonatomic) unsigned int netType;
@property (retain, nonatomic) NSString *checkSum;

+ (void)initialize;

@end
