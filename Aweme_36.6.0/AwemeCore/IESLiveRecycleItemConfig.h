@class NSString;

@interface IESLiveRecycleItemConfig : NSObject

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) Class itemCls;
@property (retain, nonatomic) id diContext;
@property (copy, nonatomic) id /* block */ setupBlock;

- (id)initWithType:(id)a0 itemCls:(Class)a1;
- (id)clsStr;
- (void).cxx_destruct;

@end
