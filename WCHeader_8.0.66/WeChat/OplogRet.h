@class NSMutableArray;

@interface OplogRet : WXPBGeneratedMessage {
    int retMemoizedSerializedSize;
}

@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *ret;
@property (retain, nonatomic) NSMutableArray *errMsg;

+ (void)initialize;

@end
