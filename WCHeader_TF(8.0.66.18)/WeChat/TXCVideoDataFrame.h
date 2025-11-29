@class NSData;

@interface TXCVideoDataFrame : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) unsigned long long format;

- (id)initWithData:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 format:(unsigned long long)a3;
- (void).cxx_destruct;

@end
