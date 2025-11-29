@class NSString, BDPUniqueID;

@interface BDPHostEventListener : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSString *jsEvent;
@property (copy, nonatomic) NSString *event;

- (void).cxx_destruct;

@end
