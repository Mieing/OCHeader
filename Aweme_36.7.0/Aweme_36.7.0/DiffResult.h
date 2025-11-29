@class NSMutableDictionary;

@interface DiffResult : NSObject

@property (retain, nonatomic) NSMutableDictionary *added;
@property (retain, nonatomic) NSMutableDictionary *modified;
@property (retain, nonatomic) NSMutableDictionary *deleted;

- (void).cxx_destruct;
- (id)init;

@end
