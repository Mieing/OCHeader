@class NSString;

@interface WAMultiTalkMgrProxy : NSObject <IWAMultiTalkMgrService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMultiTalkActive;
+ (BOOL)isMultiTalkCalling;


@end
