@class NSString;

@interface PTYRunEventCache : NSObject

@property (readonly, copy, nonatomic) NSString *business;
@property (readonly, copy, nonatomic) NSString *aid;

- (id)initWithBusiness:(id)a0 aid:(id)a1;
- (void).cxx_destruct;
- (void)reset;

@end
