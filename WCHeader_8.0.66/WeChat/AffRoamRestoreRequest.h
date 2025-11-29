@class NSMutableArray;

@interface AffRoamRestoreRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *conversationList;
@property (nonatomic) unsigned long long estimatedSize;

+ (void)initialize;

@end
