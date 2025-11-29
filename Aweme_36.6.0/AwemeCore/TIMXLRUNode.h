@protocol NSCopying;

@interface TIMXLRUNode : NSObject

@property (copy, nonatomic) id<NSCopying> key;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) TIMXLRUNode *prev;
@property (retain, nonatomic) TIMXLRUNode *next;
@property (readonly, nonatomic) double createTimeStamp;

- (void).cxx_destruct;
- (id)init;

@end
