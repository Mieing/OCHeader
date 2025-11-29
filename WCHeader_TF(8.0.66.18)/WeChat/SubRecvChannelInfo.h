@class NSString, NSMutableArray;

@interface SubRecvChannelInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *subRecvChannelTitle;
@property (nonatomic) unsigned long long defaultSubRecvChannelId;
@property (retain, nonatomic) NSString *subRecvChannelListTitle;
@property (retain, nonatomic) NSMutableArray *subRecvChannelList;

+ (void)initialize;

@end
