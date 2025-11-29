@class NSData;

@interface LarkMediaVideoObject : LarkMediaBaseObject

@property (retain, nonatomic) NSData *videoData;

- (id)dataDict;
- (BOOL)valid;
- (void).cxx_destruct;

@end
