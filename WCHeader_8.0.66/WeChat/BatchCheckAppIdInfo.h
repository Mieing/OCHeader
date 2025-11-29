@class NSMutableArray;

@interface BatchCheckAppIdInfo : NSObject

@property (retain, nonatomic) NSMutableArray *unCheckedAppIds;
@property (copy, nonatomic) id /* block */ callback;

- (id)init:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end
