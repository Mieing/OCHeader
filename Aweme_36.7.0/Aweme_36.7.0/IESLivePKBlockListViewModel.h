@class NSString, HTSLivePKApi, NSMutableArray;

@interface IESLivePKBlockListViewModel : NSObject

@property (retain, nonatomic) HTSLivePKApi *pkAPI;
@property (retain, nonatomic) NSMutableArray *blockList;
@property (copy, nonatomic) NSString *cursor;

- (void)pkBlockListWithType:(long long)a0 count:(long long)a1;
- (void)removeListItem:(id)a0 withType:(long long)a1 successBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
