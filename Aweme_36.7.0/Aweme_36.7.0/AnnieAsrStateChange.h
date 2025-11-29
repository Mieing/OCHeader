@class NSNumber, NSString;

@interface AnnieAsrStateChange : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSNumber *isConnected;
@property (copy, nonatomic) NSString *textMsg;

- (void).cxx_destruct;

@end
