@class NSData;

@interface SAMICore_Bytes : NSObject

@property (retain, nonatomic) NSData *data;
@property (nonatomic) int length;

- (void)dealloc;

@end
