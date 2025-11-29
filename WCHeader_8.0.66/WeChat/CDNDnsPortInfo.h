@class NSMutableArray;

@interface CDNDnsPortInfo : WXPBGeneratedMessage {
    int portListMemoizedSerializedSize;
}

@property (nonatomic) unsigned int portCount;
@property (retain, nonatomic) NSMutableArray *portList;

+ (void)initialize;

- (void)setPortList:(id)a0;
- (id)portList;
- (void)setPortCount:(unsigned int)a0;
- (unsigned int)portCount;

@end
