@class NSArray;

@interface AWELiveDynamicLabel : NSObject

@property (nonatomic) long long displayType;
@property (copy, nonatomic) NSArray *urlList;

- (BOOL)parseRoomDict:(id)a0;
- (id)initWithRoomDict:(id)a0;
- (void).cxx_destruct;

@end
