@class NSString;

@interface AWEPlaylistDetailActionItemModel : NSObject

@property (copy, nonatomic) id /* block */ cellTappedBlock;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL enable;

- (id)initWithType:(unsigned long long)a0 cellTappedBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
