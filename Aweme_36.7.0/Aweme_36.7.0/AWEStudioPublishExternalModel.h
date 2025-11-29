@class NSString, NSMutableArray;

@interface AWEStudioPublishExternalModel : NSObject <NSCopying>

@property (copy, nonatomic) NSString *liveSourceParam;
@property (retain, nonatomic) NSMutableArray *shareConversations;
@property (retain, nonatomic) NSMutableArray *shareUserIdList;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
