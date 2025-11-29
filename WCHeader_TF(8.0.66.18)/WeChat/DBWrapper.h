@class WCTDatabase, NSMutableArray;

@interface DBWrapper : NSObject <NSCopying>

@property (retain, nonatomic) WCTDatabase *db;
@property (retain, nonatomic) NSMutableArray *arrMsgInfo;

- (id)initWithDataBase:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
