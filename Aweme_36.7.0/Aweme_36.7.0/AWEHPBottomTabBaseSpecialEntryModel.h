@class NSString, NSDictionary;

@interface AWEHPBottomTabBaseSpecialEntryModel : NSObject <NSCopying, AWEHPBottomTabSpecialEntryModelProtocol>

@property (copy, nonatomic) NSString *callerTabId;
@property (copy, nonatomic) NSDictionary *bizTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
