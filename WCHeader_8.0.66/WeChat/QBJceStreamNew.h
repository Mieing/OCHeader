@interface QBJceStreamNew : NSObject

@property (nonatomic) char *streamBuffer;
@property (nonatomic) int streamSize;
@property (nonatomic) int cursor;

- (id)init;
- (id)data;
- (id)description;

@end
