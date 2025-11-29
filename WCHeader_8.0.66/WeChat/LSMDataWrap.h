@class NSData;

@interface LSMDataWrap : NSObject

@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned int modifyTime;

- (id)initWithData:(id)a0 modifyTime:(unsigned int)a1;
- (void).cxx_destruct;

@end
