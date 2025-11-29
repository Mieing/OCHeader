@class NSMutableArray;

@interface AffCloudRoamRestoreRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *conversationList;
@property (nonatomic) unsigned long long estimatedSize;
@property (nonatomic) BOOL isAll;

+ (void)initialize;

@end
