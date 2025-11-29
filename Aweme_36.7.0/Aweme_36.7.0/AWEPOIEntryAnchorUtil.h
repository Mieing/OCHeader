@class NSString, NSMutableSet;

@interface AWEPOIEntryAnchorUtil : NSObject <AWEPOIEntryAnchorUtilProtocol>

@property (retain, nonatomic) NSMutableSet *alreadyRequestClickAck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

@end
