@class NSString, NSData;

@interface WARemoteDebugSendPkg : NSObject

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned int minSeq;
@property (nonatomic) unsigned int maxSeq;
@property (nonatomic) unsigned int timestap;

- (void).cxx_destruct;

@end
