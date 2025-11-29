@class NSMutableDictionary, NSMutableArray;

@interface AmbViewNodeModel : NSObject

@property (nonatomic) long long left;
@property (nonatomic) long long top;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (retain, nonatomic) NSMutableDictionary *datas;
@property (retain, nonatomic) NSMutableArray *childs;

- (id)init;
- (id)toDic;
- (void).cxx_destruct;

@end
