@interface AWERecycledWorksRequestUtil : NSObject

+ (void)deleteRecycledWorksWithAwemeIDs:(id)a0 completion:(id /* block */)a1;
+ (void)recoverRecycledWorksWithAwemeIDs:(id)a0 completion:(id /* block */)a1;
+ (void)fetchRecycledWorksWithCursor:(id)a0 count:(long long)a1 completion:(id /* block */)a2;
+ (void)modifyRecycledWorksWithAwemeIDs:(id)a0 action:(long long)a1 completion:(id /* block */)a2;
+ (BOOL)validateAwemeIDs:(id)a0 completion:(id /* block */)a1;

@end
