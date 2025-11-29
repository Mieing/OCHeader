@class NSString, NSPointerArray, NSDictionary;

@interface IESLiveComponentCheckItem : NSObject

@property (retain, nonatomic) NSString *index;
@property (retain, nonatomic) NSPointerArray *items;
@property (copy, nonatomic) id /* block */ checkComplete;
@property (retain, nonatomic) NSDictionary *extra;
@property (nonatomic) BOOL checking;

- (void)recordComponents:(id)a0;
- (void)recordLiveObject:(id)a0;
- (void)deallocItem;
- (void).cxx_destruct;
- (void)check;

@end
