@class NSString, NSIndexPath;

@interface AWEIMDYOfficialTableViewContext : NSObject

@property (nonatomic) long long modelCount;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) long long demoteState;
@property (copy, nonatomic) NSString *noticeName;
@property (nonatomic) BOOL isAllCategory;

- (id)initWithIndexPath:(id)a0 modelCount:(long long)a1 demoteState:(long long)a2 noticeName:(id)a3;
- (id)initWithIndexPath:(id)a0 modelCount:(long long)a1 demoteState:(long long)a2 noticeName:(id)a3 isAllCategory:(BOOL)a4;
- (void).cxx_destruct;

@end
