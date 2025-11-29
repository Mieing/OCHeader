@class NSString;

@interface WCNewClickStatRecordPageItem : MMObject <NSCopying>

@property (nonatomic) unsigned int pageAction;
@property (retain, nonatomic) NSString *pageID;
@property (nonatomic) unsigned int timeStamp;

+ (id)pageItem:(id)a0 withAction:(unsigned int)a1 withTimeStamp:(unsigned int)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
