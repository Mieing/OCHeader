@class NSString, NSMutableDictionary;

@interface WCPayPaidOrderActivityMgr : MMUserService <MMServiceProtocol> {
    NSMutableDictionary *dicUrlToControlItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
