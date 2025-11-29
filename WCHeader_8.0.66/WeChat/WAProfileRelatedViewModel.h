@class NSString, NSArray;

@interface WAProfileRelatedViewModel : MMObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *registerTitle;
@property (retain, nonatomic) NSArray *infoList;
@property (copy, nonatomic) NSString *mainTitle;
@property (readonly, copy, nonatomic) NSArray *relateWeappList;

- (id)initWithBrandList:(id)a0;
- (id)initWithWeAppList:(id)a0;
- (id)generateMainTitle:(unsigned long long)a0;
- (void).cxx_destruct;

@end
