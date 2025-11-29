@class NSString, MMMusicLiveBaseMsg, FinderLocation;
@protocol MMMusicLiveCommentBaseViewModelDelegate;

@interface MMMusicLiveCommentBaseViewModel : NSObject

@property (weak, nonatomic) id<MMMusicLiveCommentBaseViewModelDelegate> delegate;
@property (nonatomic) unsigned long long uniqueId;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *headUrl;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) MMMusicLiveBaseMsg *msg;
@property (nonatomic) int type;
@property (retain, nonatomic) FinderLocation *location;

+ (id)modelWithPopMsg:(id)a0;

- (void)commitUpdate;
- (void).cxx_destruct;

@end
