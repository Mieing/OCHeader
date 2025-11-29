@class NSString, NSMutableSet;

@interface ContactProfileRecommHelloToChatMsgInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableSet *setMsgLocalId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_setMsgLocalId;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
