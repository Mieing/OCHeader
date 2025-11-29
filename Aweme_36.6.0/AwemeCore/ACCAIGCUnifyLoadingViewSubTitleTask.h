@class NSString;

@interface ACCAIGCUnifyLoadingViewSubTitleTask : NSObject

@property (copy, nonatomic) NSString *content;
@property (readonly, nonatomic) double duration;
@property (nonatomic) unsigned long long groupType;
@property (copy, nonatomic) id /* block */ executeBlock;

- (id)initWithContent:(id)a0 duration:(double)a1 groupType:(unsigned long long)a2;
- (void).cxx_destruct;

@end
