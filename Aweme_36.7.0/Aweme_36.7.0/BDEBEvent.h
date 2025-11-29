@class NSMutableDictionary;
@protocol NSObject;

@interface BDEBEvent : NSObject

@property (retain, nonatomic) NSMutableDictionary *mParams;
@property (readonly, nonatomic) id<NSObject> eventKey;
@property (readonly, nonatomic) id poster;

- (id)initWithEventKey:(id)a0 andPoster:(id)a1;
- (void)setParam:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)params;

@end
