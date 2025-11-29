@interface QStyleItem : NSObject

@property (readonly, nonatomic) long long styleID;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) long long order;

- (id)initWithJSON:(id)a0;
- (id)toJSON;

@end
