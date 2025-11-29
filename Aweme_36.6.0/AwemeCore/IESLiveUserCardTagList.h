@class NSMutableArray, IESLiveUserProfile;

@interface IESLiveUserCardTagList : NSObject

@property (retain, nonatomic) IESLiveUserProfile *userProfile;
@property (retain, nonatomic) NSMutableArray *itemList;

- (void)bindData:(id)a0;
- (id)itemClassRegister:(long long)a0;
- (BOOL)checkItem:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
