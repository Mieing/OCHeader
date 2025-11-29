@class NSString, NSMutableArray;

@interface StorageFilterGroup : NSObject

@property (retain, nonatomic) NSMutableArray *rowHeight;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *filters;
@property (nonatomic) long long selected;
@property (nonatomic) long long groupId;

+ (id)makeFromSort:(id)a0;
+ (id)makeFromFilterGroups:(id)a0 filters:(id)a1;

- (void).cxx_destruct;

@end
