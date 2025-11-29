@class NSData;

@interface JLResult : NSObject

@property (retain, nonatomic) NSData *outData;
@property (nonatomic) long long errCode;
@property (nonatomic) unsigned char sw1;
@property (nonatomic) unsigned char sw2;

- (void).cxx_destruct;

@end
